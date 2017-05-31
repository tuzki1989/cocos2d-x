"use strict"
log("test-new-jsb begin ...");
require("script/jsb.js")

var window = window || this;
var cc = cc || {};
/**
 * @namespace jsb
 * @name jsb
 */
var jsb = jsb || {};

var console = console || {};
console.log = log;
cc.log = log;

function iterateObject(obj, indent) {
  indent = indent || 0;
  for (var key in obj) {
    if (!obj.hasOwnProperty(key)) {
      continue;
    }
    var promote = " ";
    for (var i = 0; i < indent; ++i) {
      promote += "> ";
    }
    log(promote + "[" + key + "]=" + obj[key]);
    if (obj[key] instanceof Object) {
      iterateObject(obj[key], indent + 1);
    }
  }
}

// log("before iterate cc");
// iterateObject(cc);
// log("after iterate cc");

function foo() {
  var a = {
    a: 1,
    b: 2
  };
  var b = 1.2;
  var c = "aaa";
  var d = true;
  var e = [2, 3, 5];
  for (var i = 0; i < 1000; ++i) {
    var f = a.b * b * e[2];
    var h = {
      e: f
    };
    e.push(f);
    e.push(h);
  }
  // log("foo...");
  return e;
}

function perfTest() {
  // while (true) {
  foo();
  // }
}

function XHRTest() {
  var xhr = new XMLHttpRequest();
  xhr.onloadstart = function() {
    console.log("onloadstart");
  };
  xhr.onload = function() {
    console.log("onload");
  };
  xhr.onloadend = function() {
    console.log("onloadend");
  };

  xhr.onerror = function(err) {
    console.log("onerror: " + arguments.length + ", " + err + ", status:" + xhr.status);
    iterateObject(err);
  };

  xhr.onreadystatechange = function() {
    if (xhr.readyState == 4 && (xhr.status >= 200 && xhr.status <= 207)) {
      var httpStatus = xhr.statusText;
      console.log("before print");
      console.log("readyState:" + xhr.readyState + ", status: " + xhr.statusText + ", response:\n"); // + xhr.response);
      console.log("after print");
      if (xhr.responseType == "json") {
        iterateObject(xhr.response);
      }
      if (xhr.responseType == "arraybuffer") {
        var bytes = new Uint8Array(xhr.response);
        log("byte length: " + bytes.length);
        for (var i = 0; i < bytes.length; ++i) {
          console.log("bytes[" + i + "]=" + bytes[i]);
        }
      }
    } else {
      console.log("ERROR: readyState:" + xhr.readyState + ", status: " + xhr.statusText);
    }
  }

  xhr.responseType = "json";

  xhr.open("POST", "http://httpbin.org/post");
  //set Content-type "text/plain" to post ArrayBuffer or ArrayBufferView
  xhr.setRequestHeader("Content-Type", "text/plain");
  // Uint8Array is an ArrayBufferView
  // xhr.send(new Uint8Array([1, 2, 3, 4, 5]));
  // var data = new ArrayBuffer(6);
  // var bytes = new Uint16Array(6);
  // for (var i = 0; i < bytes.length; ++i) {
  //   bytes[i] = i;
  // }
  var data = new ArrayBuffer(6);
  var bytes = new Uint8Array(data);
  log("byte length: " + bytes.length);
  for (var i = 0; i < bytes.length; ++i) {
    bytes[i] = i;
  }
  xhr.send(data);
  // xhr.send([1, 2, 3, 4, 5]);
  // xhr.open("GET", "https://www.baidu.com");
  // forceGC();
  // xhr.send();
  // forceGC();
}



// log("before1");
// iterateObject(cc.Scene.prototype);
// log("after1");


// log("before1");
// iterateObject(cc.Node.prototype);
// log("after1");

// cc.Node.prototype.aa = 11;

// var node = new cc.Node();
// iterateObject(node.__proto__);
// log(node.aa);
// node.aa = 22;
// log(node.aa);
// log(node.__proto__.aa);
// log(cc.Node.prototype.aa);
// cc.Node.prototype.aa = 22;
// log("2:" + node.__proto__.aa);
// log("2:" + cc.Node.prototype.aa);

// log("before2");
// iterateObject(cc.Node.__proto__);
// log("after2");



var arr = [];
var a_arr = [];

cc.Node.extend = cc.Class.extend;
cc.Sprite.extend = cc.Class.extend;
cc.Scene.extend = cc.Class.extend;

var __sceneIndex = 0;
var __spriteId = 0;

// cc.Sprite.prototype._ctor = function(filePath) {
//   log("cc.Sprite.prototype._ctor: file: " + filePath);
//   var ok = this.initWithFile(filePath);
//   log(ok);
// }

// cc.Scene.prototype._ctor = function() {
//   log("cc.Scene.prototype._ctor");
//   var ok = this.init();
//   log(ok);
// }

// cc.MenuItemFont.prototype._ctor = function() {
//   log("cc.Scene.prototype._ctor");
//   var ok = this.init();
//   log(ok);
// }

var MyScene = cc.Scene.extend({
  ctor: function() {
    log("MyScene ctor ...");
    this._super();
  },
  onEnter: function() {
    log("MyScene onEnter ...");
    this._super();
  },
  onExit: function() {
    log("MyScene onExit ...");
    this._super();
  },
  onEnterTransitionDidFinish: function() {
    this._super();
    log("MyScene onEnterTransitionDidFinish, this: " + this);
  },
  onExitTransitionDidStart: function() {
    this._super();
    log("MyScene onExitTransitionDidStart, this: " + this);
  }
});

var MySprite = cc.Sprite.extend({
  id: 0,
  ctor: function(file) {
    this.id = __spriteId++;
    log("MySprite ------> In the ctor of MySprite: id:" + this.id);
    this._super(file);
    log("MySprite ------> after this._super: id:" + this.id);
  },
  onEnter: function() {
    log("MySprite onEnter1 ...: id:" + this.id);
    this._super();
    var sp = new cc.Sprite("res/Images/arrows.png");
    log('after create sp');
    sp.x = 40;
    sp.y = 40;
    this.addChild(sp);
    log("MySprite onEnter2 ...: id:" + this.id);
  },
  onExit: function() {
    log("MySprite onExit1 ...: id:" + this.id);
    this._super();
    log("MySprite onExit2 ...: id:" + this.id);
  }
});

log("start THIS: " + this);

cc.p = function(x, y) {
  return {
    x: x,
    y: y
  };
};

(function() {
  log("test start ...: THIS: " + this);

  function runScene() {
    log("runScene start ...: THIS: " + this);
    forceGC();

    var result = cc.pAdd(cc.p(10.34, 23.1), cc.p(2, 3));
    log("result.x = " + result.x);
    log("result.y = " + result.y);
    cc.assert(Math.abs(result.x - 12.34) < 0.000001);
    cc.assert(Math.abs(result.y - 26.1) < 0.000001);

    var scene = new cc.Scene();
    // log(">>>>> " + scene.foo() + ", var1: " + scene.var1 + ", var2=" + scene.var2);
    // var sp = cc.Sprite.create("res/Images/arrows.png");

    // log("before get x");
    // log("x:" + sp.x);
    // log("after get x");
    // sp.x = 400;
    // sp.y = 400;
    // log("x:" + sp.x);
    // scene.addChild(sp);

    log("cc.Sprite: " + cc.Sprite);
    log("cc.Node: " + cc.Node);
    // log("sp instanceof cc.Sprite: " + (sp instanceof cc.Sprite));
    // log("sp instanceof cc.Node: " + (sp instanceof cc.Node));
    // log("sp instanceof cc.Menu: " + (sp instanceof cc.Menu));
    // log("typeof(sp): " + typeof(sp));
    // log("" + sp);

    // var garbageNode = cc.Node.create();
    // var tempSp = cc.Sprite.create("res/Images/arrows.png");

    // var oldOnEnter = cc.Scene.prototype.onEnter;
    // var oldOnExit = cc.Scene.prototype.onExit;
    // var oldOnEnterTransitionDidFinish = cc.Scene.prototype.onEnterTransitionDidFinish;
    // var oldOnExitTransitionDidStart = cc.Scene.prototype.onExitTransitionDidStart;
    // var oldCleanup = cc.Scene.prototype.cleanup;



    // var sp2 = new cc.Sprite("res/Images/arrows.png");
    // sp2.x = 40;
    // sp2.y = 200;

    // scene.addChild(sp2);

    log("this: " + this);

    log("begin cc.Sprite.test_static_property = " + cc.Sprite.test_static_property);
    cc.Sprite.test_static_property = 23;
    log("after cc.Sprite.test_static_property = " + cc.Sprite.test_static_property);


    var sp3 = new MySprite("res/Images/arrows.png");
    log('after create sp3: ' + sp3);
    scene.addChild(sp3);
    log('after addChild sp3');
    // log("before iterate MySprite ...");
    // iterateObject(MySprite.prototype.__proto__);
    // log("after iterate MySprite ...");
    log("before sp3.x:" + sp3.x + ", y:" + sp3.y);
    sp3.x = 80;
    sp3.y = 300;
    log("after sp3.x:" + sp3.x + ", y:" + sp3.y);
    log("native ------ test ");

    // log("before iterate scene ...");
    // iterateObject(scene);
    // log("after iterate scene ...");

    // scene.onEnter = function() {
    //   log("JS onEnter, this: " + scene);
    //   oldOnEnter.apply(scene);
    //   log("JS onEnter 2");
    // };
    // scene.onExit = function() {
    //   log("JS onExit, this: " + this);
    //   oldOnExit.apply(this);
    // };

    // scene.onEnterTransitionDidFinish = function() {
    //   log("JS onEnterTransitionDidFinish, this: " + this);
    //   oldOnEnterTransitionDidFinish.apply(this);
    // };

    // scene.onExitTransitionDidStart = function() {
    //   log("JS onExitTransitionDidStart, this: " + this);
    //   oldOnExitTransitionDidStart.apply(this);
    // };

    // scene.cleanup = function() {
    //   log("JS cleanup, this: " + scene);
    //   oldCleanup.apply(scene);
    // };

    var fn = function(dt) {
      log("schedule updated 1: " + scene);
      // perfTest();
    };

    var fn2 = function(dt) {
      log("schedule updated 2: " + scene);
    };

    // var a = new MyNode;
    // scene.addChild(a);



    var menu = new cc.Menu();
    scene.addChild(menu);

    var item = null;

    item = new cc.MenuItemFont("unschedule1", function(sender) {
      log("menu item clicked!, sender: " + sender + ", this: " + this + ",id=" + sender.id);
      scene.unschedule(fn);
      var aaa = new cc.Node();
      forceGC();
      // perfTest();
    }, scene);
    item.id = "item1:" + __sceneIndex;
    menu.addChild(item);

    item = new cc.MenuItemFont("schedule1", function(sender) {
      log("click schedule1 scene: " + scene);
      scene.schedule(fn, 1);
    }, scene);
    item.id = "item1:" + __sceneIndex;
    item.y += 100;
    menu.addChild(item);

    item = new cc.MenuItemFont("unschedule2", function(sender) {
      // log("menu item clicked!, sender: " + sender + ", this: " + this + ",id=" + sender.id);
      scene.unschedule(fn2);
      // XHRTest();
    }, scene);
    item.id = "item1:" + __sceneIndex;
    item.x -= 200;
    menu.addChild(item);

    item = new cc.MenuItemFont("schedule2", function(sender) {
      scene.schedule(fn2, 1);
    }, scene);
    item.id = "item1:" + __sceneIndex;
    item.x -= 200;
    item.y += 100;
    menu.addChild(item);

    item = new cc.MenuItemFont("New Scene " + __sceneIndex, function(sender) {
      log("New Scene clicked!, sender: " + sender + ", this: " + this + ",id=" + sender.id);
      runScene();
    }, scene);
    item.id = "item2:" + __sceneIndex;
    item.y -= 100;
    menu.addChild(item);

    // var children = scene.getChildren();
    // log("iterate children begin");
    // iterateObject(children);
    // log("iterate children end");

    var director = cc.Director.getInstance();
    if (__sceneIndex == 0) {
      director.runWithScene(scene);
    } else {
      director.replaceScene(scene);
    }

    forceGC();
    __sceneIndex++;
    log("runScene end ...");
  }

  runScene();

  forceGC();
  log("after gc");

})();