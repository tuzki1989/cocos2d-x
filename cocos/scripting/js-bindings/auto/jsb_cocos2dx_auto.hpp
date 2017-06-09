#pragma once
#include "base/ccConfig.h"

#include "cocos/scripting/js-bindings/jswrapper/SeApi.h"

extern se::Object* __jsb_cocos2d_Texture2D_proto;
extern se::Class* __jsb_cocos2d_Texture2D_class;

bool js_register_cocos2d_Texture2D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getGLProgram);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getMaxT);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_setAlphaTexture);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getStringForFormat);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_initWithImage);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_setGLProgram);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getMaxS);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_hasPremultipliedAlpha);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getPixelsHigh);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_initWithMipmaps);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getAlphaTextureName);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getBitsPerPixelForFormat);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getName);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_initWithString);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_setMaxT);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getPath);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_drawInRect);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getContentSize);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_setAliasTexParameters);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_setAntiAliasTexParameters);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_generateMipmap);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getAlphaTexture);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getDescription);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getPixelFormat);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getContentSizeInPixels);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_releaseGLTexture);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getPixelsWide);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_drawAtPoint);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_hasMipmaps);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_setMaxS);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_setDefaultAlphaPixelFormat);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_getDefaultAlphaPixelFormat);
SE_DECLARE_FUNC(js_cocos2dx_Texture2D_Texture2D);

extern se::Object* __jsb_cocos2d_Touch_proto;
extern se::Class* __jsb_cocos2d_Touch_class;

bool js_register_cocos2d_Touch(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Touch_getPreviousLocationInView);
SE_DECLARE_FUNC(js_cocos2dx_Touch_getLocation);
SE_DECLARE_FUNC(js_cocos2dx_Touch_getDelta);
SE_DECLARE_FUNC(js_cocos2dx_Touch_getStartLocationInView);
SE_DECLARE_FUNC(js_cocos2dx_Touch_getCurrentForce);
SE_DECLARE_FUNC(js_cocos2dx_Touch_getStartLocation);
SE_DECLARE_FUNC(js_cocos2dx_Touch_getID);
SE_DECLARE_FUNC(js_cocos2dx_Touch_setTouchInfo);
SE_DECLARE_FUNC(js_cocos2dx_Touch_getMaxForce);
SE_DECLARE_FUNC(js_cocos2dx_Touch_getLocationInView);
SE_DECLARE_FUNC(js_cocos2dx_Touch_getPreviousLocation);
SE_DECLARE_FUNC(js_cocos2dx_Touch_Touch);

extern se::Object* __jsb_cocos2d_Event_proto;
extern se::Class* __jsb_cocos2d_Event_class;

bool js_register_cocos2d_Event(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Event_isStopped);
SE_DECLARE_FUNC(js_cocos2dx_Event_getType);
SE_DECLARE_FUNC(js_cocos2dx_Event_getCurrentTarget);
SE_DECLARE_FUNC(js_cocos2dx_Event_stopPropagation);

extern se::Object* __jsb_cocos2d_EventTouch_proto;
extern se::Class* __jsb_cocos2d_EventTouch_class;

bool js_register_cocos2d_EventTouch(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventTouch_setEventCode);
SE_DECLARE_FUNC(js_cocos2dx_EventTouch_getEventCode);

extern se::Object* __jsb_cocos2d_ComponentContainer_proto;
extern se::Class* __jsb_cocos2d_ComponentContainer_class;

bool js_register_cocos2d_ComponentContainer(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ComponentContainer_visit);
SE_DECLARE_FUNC(js_cocos2dx_ComponentContainer_remove);
SE_DECLARE_FUNC(js_cocos2dx_ComponentContainer_removeAll);
SE_DECLARE_FUNC(js_cocos2dx_ComponentContainer_add);
SE_DECLARE_FUNC(js_cocos2dx_ComponentContainer_isEmpty);
SE_DECLARE_FUNC(js_cocos2dx_ComponentContainer_get);

extern se::Object* __jsb_cocos2d_Component_proto;
extern se::Class* __jsb_cocos2d_Component_class;

bool js_register_cocos2d_Component(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Component_setEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Component_setName);
SE_DECLARE_FUNC(js_cocos2dx_Component_isEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Component_getOwner);
SE_DECLARE_FUNC(js_cocos2dx_Component_init);
SE_DECLARE_FUNC(js_cocos2dx_Component_setOwner);
SE_DECLARE_FUNC(js_cocos2dx_Component_getName);
SE_DECLARE_FUNC(js_cocos2dx_Component_create);
SE_DECLARE_FUNC(js_cocos2dx_Component_Component);

extern se::Object* __jsb_cocos2d_Node_proto;
extern se::Class* __jsb_cocos2d_Node_class;

bool js_register_cocos2d_Node(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Node_addChild);
SE_DECLARE_FUNC(js_cocos2dx_Node_removeComponent);
SE_DECLARE_FUNC(js_cocos2dx_Node_setPhysicsBody);
SE_DECLARE_FUNC(js_cocos2dx_Node_getGLProgram);
SE_DECLARE_FUNC(js_cocos2dx_Node_getDescription);
SE_DECLARE_FUNC(js_cocos2dx_Node_setOpacityModifyRGB);
SE_DECLARE_FUNC(js_cocos2dx_Node_setCascadeOpacityEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Node_getChildren);
SE_DECLARE_FUNC(js_cocos2dx_Node_setOnExitCallback);
SE_DECLARE_FUNC(js_cocos2dx_Node_setActionManager);
SE_DECLARE_FUNC(js_cocos2dx_Node_convertToWorldSpaceAR);
SE_DECLARE_FUNC(js_cocos2dx_Node_isIgnoreAnchorPointForPosition);
SE_DECLARE_FUNC(js_cocos2dx_Node_getChildByName);
SE_DECLARE_FUNC(js_cocos2dx_Node_updateDisplayedOpacity);
SE_DECLARE_FUNC(js_cocos2dx_Node_init);
SE_DECLARE_FUNC(js_cocos2dx_Node_getCameraMask);
SE_DECLARE_FUNC(js_cocos2dx_Node_setRotation);
SE_DECLARE_FUNC(js_cocos2dx_Node_setScaleZ);
SE_DECLARE_FUNC(js_cocos2dx_Node_setScaleY);
SE_DECLARE_FUNC(js_cocos2dx_Node_setScaleX);
SE_DECLARE_FUNC(js_cocos2dx_Node_getColor);
SE_DECLARE_FUNC(js_cocos2dx_Node_setonEnterTransitionDidFinishCallback);
SE_DECLARE_FUNC(js_cocos2dx_Node_removeAllComponents);
SE_DECLARE_FUNC(js_cocos2dx_Node__setLocalZOrder);
SE_DECLARE_FUNC(js_cocos2dx_Node_setCameraMask);
SE_DECLARE_FUNC(js_cocos2dx_Node_getTag);
SE_DECLARE_FUNC(js_cocos2dx_Node_getNodeToWorldAffineTransform);
SE_DECLARE_FUNC(js_cocos2dx_Node_getPosition3D);
SE_DECLARE_FUNC(js_cocos2dx_Node_removeChild);
SE_DECLARE_FUNC(js_cocos2dx_Node_convertToWorldSpace);
SE_DECLARE_FUNC(js_cocos2dx_Node_getScene);
SE_DECLARE_FUNC(js_cocos2dx_Node_getEventDispatcher);
SE_DECLARE_FUNC(js_cocos2dx_Node_setSkewX);
SE_DECLARE_FUNC(js_cocos2dx_Node_setGLProgramState);
SE_DECLARE_FUNC(js_cocos2dx_Node_setOnEnterCallback);
SE_DECLARE_FUNC(js_cocos2dx_Node_stopActionsByFlags);
SE_DECLARE_FUNC(js_cocos2dx_Node_setNormalizedPosition);
SE_DECLARE_FUNC(js_cocos2dx_Node_setonExitTransitionDidStartCallback);
SE_DECLARE_FUNC(js_cocos2dx_Node_convertTouchToNodeSpace);
SE_DECLARE_FUNC(js_cocos2dx_Node_removeAllChildrenWithCleanup);
SE_DECLARE_FUNC(js_cocos2dx_Node_getRotationSkewX);
SE_DECLARE_FUNC(js_cocos2dx_Node_getRotationSkewY);
SE_DECLARE_FUNC(js_cocos2dx_Node_setCleanupCallback);
SE_DECLARE_FUNC(js_cocos2dx_Node_getNodeToWorldTransform);
SE_DECLARE_FUNC(js_cocos2dx_Node_isCascadeOpacityEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Node_setParent);
SE_DECLARE_FUNC(js_cocos2dx_Node_getName);
SE_DECLARE_FUNC(js_cocos2dx_Node_resume);
SE_DECLARE_FUNC(js_cocos2dx_Node_getRotation3D);
SE_DECLARE_FUNC(js_cocos2dx_Node_getNodeToParentAffineTransform);
SE_DECLARE_FUNC(js_cocos2dx_Node_convertTouchToNodeSpaceAR);
SE_DECLARE_FUNC(js_cocos2dx_Node_setPositionNormalized);
SE_DECLARE_FUNC(js_cocos2dx_Node_pause);
SE_DECLARE_FUNC(js_cocos2dx_Node_isOpacityModifyRGB);
SE_DECLARE_FUNC(js_cocos2dx_Node_stopActionByTag);
SE_DECLARE_FUNC(js_cocos2dx_Node_reorderChild);
SE_DECLARE_FUNC(js_cocos2dx_Node_setSkewY);
SE_DECLARE_FUNC(js_cocos2dx_Node_setColor);
SE_DECLARE_FUNC(js_cocos2dx_Node_setRotation3D);
SE_DECLARE_FUNC(js_cocos2dx_Node_setPositionX);
SE_DECLARE_FUNC(js_cocos2dx_Node_setNodeToParentTransform);
SE_DECLARE_FUNC(js_cocos2dx_Node_getAnchorPoint);
SE_DECLARE_FUNC(js_cocos2dx_Node_getNumberOfRunningActions);
SE_DECLARE_FUNC(js_cocos2dx_Node_updateTransform);
SE_DECLARE_FUNC(js_cocos2dx_Node_isVisible);
SE_DECLARE_FUNC(js_cocos2dx_Node_getChildrenCount);
SE_DECLARE_FUNC(js_cocos2dx_Node_getNodeToParentTransform);
SE_DECLARE_FUNC(js_cocos2dx_Node_convertToNodeSpaceAR);
SE_DECLARE_FUNC(js_cocos2dx_Node_addComponent);
SE_DECLARE_FUNC(js_cocos2dx_Node_runAction);
SE_DECLARE_FUNC(js_cocos2dx_Node_visit);
SE_DECLARE_FUNC(js_cocos2dx_Node_setGLProgram);
SE_DECLARE_FUNC(js_cocos2dx_Node_getRotation);
SE_DECLARE_FUNC(js_cocos2dx_Node_getAnchorPointInPoints);
SE_DECLARE_FUNC(js_cocos2dx_Node_getCleanupCallback);
SE_DECLARE_FUNC(js_cocos2dx_Node_getRotationQuat);
SE_DECLARE_FUNC(js_cocos2dx_Node_removeChildByName);
SE_DECLARE_FUNC(js_cocos2dx_Node_setPositionZ);
SE_DECLARE_FUNC(js_cocos2dx_Node_getGLProgramState);
SE_DECLARE_FUNC(js_cocos2dx_Node_setScheduler);
SE_DECLARE_FUNC(js_cocos2dx_Node_stopAllActions);
SE_DECLARE_FUNC(js_cocos2dx_Node_getSkewX);
SE_DECLARE_FUNC(js_cocos2dx_Node_getSkewY);
SE_DECLARE_FUNC(js_cocos2dx_Node_getDisplayedColor);
SE_DECLARE_FUNC(js_cocos2dx_Node_getActionByTag);
SE_DECLARE_FUNC(js_cocos2dx_Node_setRotationSkewX);
SE_DECLARE_FUNC(js_cocos2dx_Node_setRotationSkewY);
SE_DECLARE_FUNC(js_cocos2dx_Node_setName);
SE_DECLARE_FUNC(js_cocos2dx_Node_update);
SE_DECLARE_FUNC(js_cocos2dx_Node_getDisplayedOpacity);
SE_DECLARE_FUNC(js_cocos2dx_Node_getLocalZOrder);
SE_DECLARE_FUNC(js_cocos2dx_Node_getScheduler);
SE_DECLARE_FUNC(js_cocos2dx_Node_getPositionNormalized);
SE_DECLARE_FUNC(js_cocos2dx_Node_getPosition);
SE_DECLARE_FUNC(js_cocos2dx_Node_isRunning);
SE_DECLARE_FUNC(js_cocos2dx_Node_getParent);
SE_DECLARE_FUNC(js_cocos2dx_Node_getWorldToNodeTransform);
SE_DECLARE_FUNC(js_cocos2dx_Node_getPositionY);
SE_DECLARE_FUNC(js_cocos2dx_Node_getPositionX);
SE_DECLARE_FUNC(js_cocos2dx_Node_removeChildByTag);
SE_DECLARE_FUNC(js_cocos2dx_Node_setPositionY);
SE_DECLARE_FUNC(js_cocos2dx_Node_updateDisplayedColor);
SE_DECLARE_FUNC(js_cocos2dx_Node_setVisible);
SE_DECLARE_FUNC(js_cocos2dx_Node_getParentToNodeAffineTransform);
SE_DECLARE_FUNC(js_cocos2dx_Node_getPositionZ);
SE_DECLARE_FUNC(js_cocos2dx_Node_setGlobalZOrder);
SE_DECLARE_FUNC(js_cocos2dx_Node_setScale);
SE_DECLARE_FUNC(js_cocos2dx_Node_getChildByTag);
SE_DECLARE_FUNC(js_cocos2dx_Node_getScaleZ);
SE_DECLARE_FUNC(js_cocos2dx_Node_getScaleY);
SE_DECLARE_FUNC(js_cocos2dx_Node_getScaleX);
SE_DECLARE_FUNC(js_cocos2dx_Node_setLocalZOrder);
SE_DECLARE_FUNC(js_cocos2dx_Node_setCascadeColorEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Node_setOpacity);
SE_DECLARE_FUNC(js_cocos2dx_Node_getComponent);
SE_DECLARE_FUNC(js_cocos2dx_Node_getContentSize);
SE_DECLARE_FUNC(js_cocos2dx_Node_stopAllActionsByTag);
SE_DECLARE_FUNC(js_cocos2dx_Node_getBoundingBox);
SE_DECLARE_FUNC(js_cocos2dx_Node_setIgnoreAnchorPointForPosition);
SE_DECLARE_FUNC(js_cocos2dx_Node_setEventDispatcher);
SE_DECLARE_FUNC(js_cocos2dx_Node_getGlobalZOrder);
SE_DECLARE_FUNC(js_cocos2dx_Node_draw);
SE_DECLARE_FUNC(js_cocos2dx_Node_setUserObject);
SE_DECLARE_FUNC(js_cocos2dx_Node_enumerateChildren);
SE_DECLARE_FUNC(js_cocos2dx_Node_removeFromParentAndCleanup);
SE_DECLARE_FUNC(js_cocos2dx_Node_setPosition3D);
SE_DECLARE_FUNC(js_cocos2dx_Node_getNumberOfRunningActionsByTag);
SE_DECLARE_FUNC(js_cocos2dx_Node_sortAllChildren);
SE_DECLARE_FUNC(js_cocos2dx_Node_getWorldToNodeAffineTransform);
SE_DECLARE_FUNC(js_cocos2dx_Node_getScale);
SE_DECLARE_FUNC(js_cocos2dx_Node_getOpacity);
SE_DECLARE_FUNC(js_cocos2dx_Node_updateOrderOfArrival);
SE_DECLARE_FUNC(js_cocos2dx_Node_getNormalizedPosition);
SE_DECLARE_FUNC(js_cocos2dx_Node_getParentToNodeTransform);
SE_DECLARE_FUNC(js_cocos2dx_Node_convertToNodeSpace);
SE_DECLARE_FUNC(js_cocos2dx_Node_setTag);
SE_DECLARE_FUNC(js_cocos2dx_Node_isCascadeColorEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Node_setRotationQuat);
SE_DECLARE_FUNC(js_cocos2dx_Node_stopAction);
SE_DECLARE_FUNC(js_cocos2dx_Node_getActionManager);
SE_DECLARE_FUNC(js_cocos2dx_Node_create);
SE_DECLARE_FUNC(js_cocos2dx_Node_Node);

extern se::Object* __jsb_cocos2d___NodeRGBA_proto;
extern se::Class* __jsb_cocos2d___NodeRGBA_class;

bool js_register_cocos2d___NodeRGBA(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx___NodeRGBA___NodeRGBA);

extern se::Object* __jsb_cocos2d_Scene_proto;
extern se::Class* __jsb_cocos2d_Scene_class;

bool js_register_cocos2d_Scene(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Scene_setCameraOrderDirty);
SE_DECLARE_FUNC(js_cocos2dx_Scene_render);
SE_DECLARE_FUNC(js_cocos2dx_Scene_stepPhysicsAndNavigation);
SE_DECLARE_FUNC(js_cocos2dx_Scene_onProjectionChanged);
SE_DECLARE_FUNC(js_cocos2dx_Scene_initWithSize);
SE_DECLARE_FUNC(js_cocos2dx_Scene_getDefaultCamera);
SE_DECLARE_FUNC(js_cocos2dx_Scene_createWithSize);
SE_DECLARE_FUNC(js_cocos2dx_Scene_create);
SE_DECLARE_FUNC(js_cocos2dx_Scene_Scene);

extern se::Object* __jsb_cocos2d_GLView_proto;
extern se::Class* __jsb_cocos2d_GLView_class;

bool js_register_cocos2d_GLView(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_GLView_setFrameSize);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getViewPortRect);
SE_DECLARE_FUNC(js_cocos2dx_GLView_setContentScaleFactor);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getContentScaleFactor);
SE_DECLARE_FUNC(js_cocos2dx_GLView_setIMEKeyboardState);
SE_DECLARE_FUNC(js_cocos2dx_GLView_setScissorInPoints);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getViewName);
SE_DECLARE_FUNC(js_cocos2dx_GLView_isOpenGLReady);
SE_DECLARE_FUNC(js_cocos2dx_GLView_setCursorVisible);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getScaleY);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getScaleX);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getVisibleOrigin);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getFrameSize);
SE_DECLARE_FUNC(js_cocos2dx_GLView_setFrameZoomFactor);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getFrameZoomFactor);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getDesignResolutionSize);
SE_DECLARE_FUNC(js_cocos2dx_GLView_windowShouldClose);
SE_DECLARE_FUNC(js_cocos2dx_GLView_setDesignResolutionSize);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getResolutionPolicy);
SE_DECLARE_FUNC(js_cocos2dx_GLView_isRetinaDisplay);
SE_DECLARE_FUNC(js_cocos2dx_GLView_renderScene);
SE_DECLARE_FUNC(js_cocos2dx_GLView_setVR);
SE_DECLARE_FUNC(js_cocos2dx_GLView_setViewPortInPoints);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getScissorRect);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getRetinaFactor);
SE_DECLARE_FUNC(js_cocos2dx_GLView_setViewName);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getVisibleRect);
SE_DECLARE_FUNC(js_cocos2dx_GLView_getVisibleSize);
SE_DECLARE_FUNC(js_cocos2dx_GLView_isScissorEnabled);
SE_DECLARE_FUNC(js_cocos2dx_GLView_pollEvents);

extern se::Object* __jsb_cocos2d_Director_proto;
extern se::Class* __jsb_cocos2d_Director_class;

bool js_register_cocos2d_Director(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Director_pause);
SE_DECLARE_FUNC(js_cocos2dx_Director_pushProjectionMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_popProjectionMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_setEventDispatcher);
SE_DECLARE_FUNC(js_cocos2dx_Director_loadProjectionIdentityMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_setContentScaleFactor);
SE_DECLARE_FUNC(js_cocos2dx_Director_getContentScaleFactor);
SE_DECLARE_FUNC(js_cocos2dx_Director_getWinSizeInPixels);
SE_DECLARE_FUNC(js_cocos2dx_Director_getDeltaTime);
SE_DECLARE_FUNC(js_cocos2dx_Director_setGLDefaultValues);
SE_DECLARE_FUNC(js_cocos2dx_Director_setActionManager);
SE_DECLARE_FUNC(js_cocos2dx_Director_setAlphaBlending);
SE_DECLARE_FUNC(js_cocos2dx_Director_popToRootScene);
SE_DECLARE_FUNC(js_cocos2dx_Director_loadMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_getNotificationNode);
SE_DECLARE_FUNC(js_cocos2dx_Director_getWinSize);
SE_DECLARE_FUNC(js_cocos2dx_Director_end);
SE_DECLARE_FUNC(js_cocos2dx_Director_getTextureCache);
SE_DECLARE_FUNC(js_cocos2dx_Director_isSendCleanupToScene);
SE_DECLARE_FUNC(js_cocos2dx_Director_getVisibleOrigin);
SE_DECLARE_FUNC(js_cocos2dx_Director_mainLoop);
SE_DECLARE_FUNC(js_cocos2dx_Director_setDepthTest);
SE_DECLARE_FUNC(js_cocos2dx_Director_getFrameRate);
SE_DECLARE_FUNC(js_cocos2dx_Director_getSecondsPerFrame);
SE_DECLARE_FUNC(js_cocos2dx_Director_resetMatrixStack);
SE_DECLARE_FUNC(js_cocos2dx_Director_convertToUI);
SE_DECLARE_FUNC(js_cocos2dx_Director_pushMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_setDefaultValues);
SE_DECLARE_FUNC(js_cocos2dx_Director_init);
SE_DECLARE_FUNC(js_cocos2dx_Director_setScheduler);
SE_DECLARE_FUNC(js_cocos2dx_Director_multiplyProjectionMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_getMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_isValid);
SE_DECLARE_FUNC(js_cocos2dx_Director_startAnimation);
SE_DECLARE_FUNC(js_cocos2dx_Director_getOpenGLView);
SE_DECLARE_FUNC(js_cocos2dx_Director_getRunningScene);
SE_DECLARE_FUNC(js_cocos2dx_Director_setViewport);
SE_DECLARE_FUNC(js_cocos2dx_Director_stopAnimation);
SE_DECLARE_FUNC(js_cocos2dx_Director_popToSceneStackLevel);
SE_DECLARE_FUNC(js_cocos2dx_Director_resume);
SE_DECLARE_FUNC(js_cocos2dx_Director_isNextDeltaTimeZero);
SE_DECLARE_FUNC(js_cocos2dx_Director_setClearColor);
SE_DECLARE_FUNC(js_cocos2dx_Director_setOpenGLView);
SE_DECLARE_FUNC(js_cocos2dx_Director_convertToGL);
SE_DECLARE_FUNC(js_cocos2dx_Director_purgeCachedData);
SE_DECLARE_FUNC(js_cocos2dx_Director_getTotalFrames);
SE_DECLARE_FUNC(js_cocos2dx_Director_runWithScene);
SE_DECLARE_FUNC(js_cocos2dx_Director_setNotificationNode);
SE_DECLARE_FUNC(js_cocos2dx_Director_drawScene);
SE_DECLARE_FUNC(js_cocos2dx_Director_restart);
SE_DECLARE_FUNC(js_cocos2dx_Director_popScene);
SE_DECLARE_FUNC(js_cocos2dx_Director_loadIdentityMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_isDisplayStats);
SE_DECLARE_FUNC(js_cocos2dx_Director_setProjection);
SE_DECLARE_FUNC(js_cocos2dx_Director_multiplyMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_getZEye);
SE_DECLARE_FUNC(js_cocos2dx_Director_setNextDeltaTimeZero);
SE_DECLARE_FUNC(js_cocos2dx_Director_popMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_getVisibleSize);
SE_DECLARE_FUNC(js_cocos2dx_Director_loadProjectionMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Director_initProjectionMatrixStack);
SE_DECLARE_FUNC(js_cocos2dx_Director_getScheduler);
SE_DECLARE_FUNC(js_cocos2dx_Director_pushScene);
SE_DECLARE_FUNC(js_cocos2dx_Director_getAnimationInterval);
SE_DECLARE_FUNC(js_cocos2dx_Director_isPaused);
SE_DECLARE_FUNC(js_cocos2dx_Director_setDisplayStats);
SE_DECLARE_FUNC(js_cocos2dx_Director_getEventDispatcher);
SE_DECLARE_FUNC(js_cocos2dx_Director_replaceScene);
SE_DECLARE_FUNC(js_cocos2dx_Director_setAnimationInterval);
SE_DECLARE_FUNC(js_cocos2dx_Director_getActionManager);
SE_DECLARE_FUNC(js_cocos2dx_Director_getInstance);

extern se::Object* __jsb_cocos2d_Scheduler_proto;
extern se::Class* __jsb_cocos2d_Scheduler_class;

bool js_register_cocos2d_Scheduler(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Scheduler_setTimeScale);
SE_DECLARE_FUNC(js_cocos2dx_Scheduler_update);
SE_DECLARE_FUNC(js_cocos2dx_Scheduler_unscheduleScriptEntry);
SE_DECLARE_FUNC(js_cocos2dx_Scheduler_unscheduleAll);
SE_DECLARE_FUNC(js_cocos2dx_Scheduler_getTimeScale);
SE_DECLARE_FUNC(js_cocos2dx_Scheduler_unscheduleAllWithMinPriority);
SE_DECLARE_FUNC(js_cocos2dx_Scheduler_performFunctionInCocosThread);
SE_DECLARE_FUNC(js_cocos2dx_Scheduler_removeAllFunctionsToBePerformedInCocosThread);
SE_DECLARE_FUNC(js_cocos2dx_Scheduler_Scheduler);

extern se::Object* __jsb_cocos2d_AsyncTaskPool_proto;
extern se::Class* __jsb_cocos2d_AsyncTaskPool_class;

bool js_register_cocos2d_AsyncTaskPool(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_AsyncTaskPool_stopTasks);
SE_DECLARE_FUNC(js_cocos2dx_AsyncTaskPool_destroyInstance);
SE_DECLARE_FUNC(js_cocos2dx_AsyncTaskPool_getInstance);

extern se::Object* __jsb_cocos2d_Action_proto;
extern se::Class* __jsb_cocos2d_Action_class;

bool js_register_cocos2d_Action(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Action_startWithTarget);
SE_DECLARE_FUNC(js_cocos2dx_Action_setOriginalTarget);
SE_DECLARE_FUNC(js_cocos2dx_Action_clone);
SE_DECLARE_FUNC(js_cocos2dx_Action_getOriginalTarget);
SE_DECLARE_FUNC(js_cocos2dx_Action_stop);
SE_DECLARE_FUNC(js_cocos2dx_Action_update);
SE_DECLARE_FUNC(js_cocos2dx_Action_getTarget);
SE_DECLARE_FUNC(js_cocos2dx_Action_getFlags);
SE_DECLARE_FUNC(js_cocos2dx_Action_step);
SE_DECLARE_FUNC(js_cocos2dx_Action_setTag);
SE_DECLARE_FUNC(js_cocos2dx_Action_setFlags);
SE_DECLARE_FUNC(js_cocos2dx_Action_getTag);
SE_DECLARE_FUNC(js_cocos2dx_Action_setTarget);
SE_DECLARE_FUNC(js_cocos2dx_Action_isDone);
SE_DECLARE_FUNC(js_cocos2dx_Action_reverse);

extern se::Object* __jsb_cocos2d_FiniteTimeAction_proto;
extern se::Class* __jsb_cocos2d_FiniteTimeAction_class;

bool js_register_cocos2d_FiniteTimeAction(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FiniteTimeAction_setDuration);
SE_DECLARE_FUNC(js_cocos2dx_FiniteTimeAction_getDuration);

extern se::Object* __jsb_cocos2d_Speed_proto;
extern se::Class* __jsb_cocos2d_Speed_class;

bool js_register_cocos2d_Speed(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Speed_setInnerAction);
SE_DECLARE_FUNC(js_cocos2dx_Speed_getSpeed);
SE_DECLARE_FUNC(js_cocos2dx_Speed_setSpeed);
SE_DECLARE_FUNC(js_cocos2dx_Speed_initWithAction);
SE_DECLARE_FUNC(js_cocos2dx_Speed_getInnerAction);
SE_DECLARE_FUNC(js_cocos2dx_Speed_create);
SE_DECLARE_FUNC(js_cocos2dx_Speed_Speed);

extern se::Object* __jsb_cocos2d_Follow_proto;
extern se::Class* __jsb_cocos2d_Follow_class;

bool js_register_cocos2d_Follow(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Follow_setBoundarySet);
SE_DECLARE_FUNC(js_cocos2dx_Follow_initWithTarget);
SE_DECLARE_FUNC(js_cocos2dx_Follow_initWithTargetAndOffset);
SE_DECLARE_FUNC(js_cocos2dx_Follow_isBoundarySet);
SE_DECLARE_FUNC(js_cocos2dx_Follow_create);
SE_DECLARE_FUNC(js_cocos2dx_Follow_createWithOffset);
SE_DECLARE_FUNC(js_cocos2dx_Follow_Follow);

extern se::Object* __jsb_cocos2d_Image_proto;
extern se::Class* __jsb_cocos2d_Image_class;

bool js_register_cocos2d_Image(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Image_hasPremultipliedAlpha);
SE_DECLARE_FUNC(js_cocos2dx_Image_saveToFile);
SE_DECLARE_FUNC(js_cocos2dx_Image_hasAlpha);
SE_DECLARE_FUNC(js_cocos2dx_Image_isCompressed);
SE_DECLARE_FUNC(js_cocos2dx_Image_getHeight);
SE_DECLARE_FUNC(js_cocos2dx_Image_initWithImageFile);
SE_DECLARE_FUNC(js_cocos2dx_Image_getWidth);
SE_DECLARE_FUNC(js_cocos2dx_Image_getBitPerPixel);
SE_DECLARE_FUNC(js_cocos2dx_Image_getFileType);
SE_DECLARE_FUNC(js_cocos2dx_Image_getFilePath);
SE_DECLARE_FUNC(js_cocos2dx_Image_getNumberOfMipmaps);
SE_DECLARE_FUNC(js_cocos2dx_Image_getRenderFormat);
SE_DECLARE_FUNC(js_cocos2dx_Image_initWithRawData);
SE_DECLARE_FUNC(js_cocos2dx_Image_setPVRImagesHavePremultipliedAlpha);
SE_DECLARE_FUNC(js_cocos2dx_Image_setPNGPremultipliedAlphaEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Image_Image);

extern se::Object* __jsb_cocos2d_GLProgramState_proto;
extern se::Class* __jsb_cocos2d_GLProgramState_class;

bool js_register_cocos2d_GLProgramState(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setUniformCallback);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_getVertexAttribsFlags);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_applyAutoBinding);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setUniformVec2);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setUniformVec3);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setVertexAttribCallback);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_apply);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_getNodeBinding);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_applyGLProgram);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setNodeBinding);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setUniformInt);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setParameterAutoBinding);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setUniformVec2v);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_getUniformCount);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_applyAttributes);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_clone);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setGLProgram);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setUniformFloatv);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_getGLProgram);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setUniformTexture);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_applyUniforms);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setUniformFloat);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setUniformMat4);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_setUniformVec3v);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_getVertexAttribCount);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_create);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_getOrCreateWithGLProgramName);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_getOrCreateWithGLProgram);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramState_getOrCreateWithShaders);

extern se::Object* __jsb_cocos2d_SpriteFrame_proto;
extern se::Class* __jsb_cocos2d_SpriteFrame_class;

bool js_register_cocos2d_SpriteFrame(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_setAnchorPoint);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_setTexture);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_getTexture);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_setOffsetInPixels);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_getOriginalSizeInPixels);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_setOriginalSize);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_getCenterRect);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_setRectInPixels);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_getRect);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_setCenterRectInPixels);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_setOffset);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_initWithTextureFilename);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_setRect);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_initWithTexture);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_getOriginalSize);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_clone);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_getRectInPixels);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_isRotated);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_hasCenterRect);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_setRotated);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_getOffset);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_setOriginalSizeInPixels);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_getAnchorPoint);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_hasAnchorPoint);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_getOffsetInPixels);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_create);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_createWithTexture);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrame_SpriteFrame);

extern se::Object* __jsb_cocos2d_AnimationFrame_proto;
extern se::Class* __jsb_cocos2d_AnimationFrame_class;

bool js_register_cocos2d_AnimationFrame(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_AnimationFrame_setSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_AnimationFrame_getUserInfo);
SE_DECLARE_FUNC(js_cocos2dx_AnimationFrame_setDelayUnits);
SE_DECLARE_FUNC(js_cocos2dx_AnimationFrame_clone);
SE_DECLARE_FUNC(js_cocos2dx_AnimationFrame_getSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_AnimationFrame_getDelayUnits);
SE_DECLARE_FUNC(js_cocos2dx_AnimationFrame_setUserInfo);
SE_DECLARE_FUNC(js_cocos2dx_AnimationFrame_initWithSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_AnimationFrame_create);
SE_DECLARE_FUNC(js_cocos2dx_AnimationFrame_AnimationFrame);

extern se::Object* __jsb_cocos2d_Animation_proto;
extern se::Class* __jsb_cocos2d_Animation_class;

bool js_register_cocos2d_Animation(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Animation_getLoops);
SE_DECLARE_FUNC(js_cocos2dx_Animation_addSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_Animation_setRestoreOriginalFrame);
SE_DECLARE_FUNC(js_cocos2dx_Animation_clone);
SE_DECLARE_FUNC(js_cocos2dx_Animation_getDuration);
SE_DECLARE_FUNC(js_cocos2dx_Animation_initWithAnimationFrames);
SE_DECLARE_FUNC(js_cocos2dx_Animation_init);
SE_DECLARE_FUNC(js_cocos2dx_Animation_setFrames);
SE_DECLARE_FUNC(js_cocos2dx_Animation_getFrames);
SE_DECLARE_FUNC(js_cocos2dx_Animation_setLoops);
SE_DECLARE_FUNC(js_cocos2dx_Animation_setDelayPerUnit);
SE_DECLARE_FUNC(js_cocos2dx_Animation_addSpriteFrameWithFile);
SE_DECLARE_FUNC(js_cocos2dx_Animation_getTotalDelayUnits);
SE_DECLARE_FUNC(js_cocos2dx_Animation_getDelayPerUnit);
SE_DECLARE_FUNC(js_cocos2dx_Animation_initWithSpriteFrames);
SE_DECLARE_FUNC(js_cocos2dx_Animation_getRestoreOriginalFrame);
SE_DECLARE_FUNC(js_cocos2dx_Animation_addSpriteFrameWithTexture);
SE_DECLARE_FUNC(js_cocos2dx_Animation_create);
SE_DECLARE_FUNC(js_cocos2dx_Animation_createWithSpriteFrames);
SE_DECLARE_FUNC(js_cocos2dx_Animation_Animation);

extern se::Object* __jsb_cocos2d_ActionInterval_proto;
extern se::Class* __jsb_cocos2d_ActionInterval_class;

bool js_register_cocos2d_ActionInterval(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ActionInterval_getAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_ActionInterval_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_ActionInterval_setAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_ActionInterval_getElapsed);

extern se::Object* __jsb_cocos2d_Sequence_proto;
extern se::Class* __jsb_cocos2d_Sequence_class;

bool js_register_cocos2d_Sequence(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Sequence_init);
SE_DECLARE_FUNC(js_cocos2dx_Sequence_initWithTwoActions);
SE_DECLARE_FUNC(js_cocos2dx_Sequence_Sequence);

extern se::Object* __jsb_cocos2d_Repeat_proto;
extern se::Class* __jsb_cocos2d_Repeat_class;

bool js_register_cocos2d_Repeat(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Repeat_setInnerAction);
SE_DECLARE_FUNC(js_cocos2dx_Repeat_initWithAction);
SE_DECLARE_FUNC(js_cocos2dx_Repeat_getInnerAction);
SE_DECLARE_FUNC(js_cocos2dx_Repeat_create);
SE_DECLARE_FUNC(js_cocos2dx_Repeat_Repeat);

extern se::Object* __jsb_cocos2d_RepeatForever_proto;
extern se::Class* __jsb_cocos2d_RepeatForever_class;

bool js_register_cocos2d_RepeatForever(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_RepeatForever_setInnerAction);
SE_DECLARE_FUNC(js_cocos2dx_RepeatForever_initWithAction);
SE_DECLARE_FUNC(js_cocos2dx_RepeatForever_getInnerAction);
SE_DECLARE_FUNC(js_cocos2dx_RepeatForever_create);
SE_DECLARE_FUNC(js_cocos2dx_RepeatForever_RepeatForever);

extern se::Object* __jsb_cocos2d_Spawn_proto;
extern se::Class* __jsb_cocos2d_Spawn_class;

bool js_register_cocos2d_Spawn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Spawn_init);
SE_DECLARE_FUNC(js_cocos2dx_Spawn_initWithTwoActions);
SE_DECLARE_FUNC(js_cocos2dx_Spawn_Spawn);

extern se::Object* __jsb_cocos2d_RotateTo_proto;
extern se::Class* __jsb_cocos2d_RotateTo_class;

bool js_register_cocos2d_RotateTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_RotateTo_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_RotateTo_create);
SE_DECLARE_FUNC(js_cocos2dx_RotateTo_RotateTo);

extern se::Object* __jsb_cocos2d_RotateBy_proto;
extern se::Class* __jsb_cocos2d_RotateBy_class;

bool js_register_cocos2d_RotateBy(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_RotateBy_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_RotateBy_create);
SE_DECLARE_FUNC(js_cocos2dx_RotateBy_RotateBy);

extern se::Object* __jsb_cocos2d_MoveBy_proto;
extern se::Class* __jsb_cocos2d_MoveBy_class;

bool js_register_cocos2d_MoveBy(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_MoveBy_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_MoveBy_create);
SE_DECLARE_FUNC(js_cocos2dx_MoveBy_MoveBy);

extern se::Object* __jsb_cocos2d_MoveTo_proto;
extern se::Class* __jsb_cocos2d_MoveTo_class;

bool js_register_cocos2d_MoveTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_MoveTo_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_MoveTo_create);
SE_DECLARE_FUNC(js_cocos2dx_MoveTo_MoveTo);

extern se::Object* __jsb_cocos2d_SkewTo_proto;
extern se::Class* __jsb_cocos2d_SkewTo_class;

bool js_register_cocos2d_SkewTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_SkewTo_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_SkewTo_create);
SE_DECLARE_FUNC(js_cocos2dx_SkewTo_SkewTo);

extern se::Object* __jsb_cocos2d_SkewBy_proto;
extern se::Class* __jsb_cocos2d_SkewBy_class;

bool js_register_cocos2d_SkewBy(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_SkewBy_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_SkewBy_create);
SE_DECLARE_FUNC(js_cocos2dx_SkewBy_SkewBy);

extern se::Object* __jsb_cocos2d_JumpBy_proto;
extern se::Class* __jsb_cocos2d_JumpBy_class;

bool js_register_cocos2d_JumpBy(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_JumpBy_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_JumpBy_create);
SE_DECLARE_FUNC(js_cocos2dx_JumpBy_JumpBy);

extern se::Object* __jsb_cocos2d_JumpTo_proto;
extern se::Class* __jsb_cocos2d_JumpTo_class;

bool js_register_cocos2d_JumpTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_JumpTo_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_JumpTo_create);
SE_DECLARE_FUNC(js_cocos2dx_JumpTo_JumpTo);

extern se::Object* __jsb_cocos2d_BezierBy_proto;
extern se::Class* __jsb_cocos2d_BezierBy_class;

bool js_register_cocos2d_BezierBy(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_BezierBy_BezierBy);

extern se::Object* __jsb_cocos2d_BezierTo_proto;
extern se::Class* __jsb_cocos2d_BezierTo_class;

bool js_register_cocos2d_BezierTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_BezierTo_BezierTo);

extern se::Object* __jsb_cocos2d_ScaleTo_proto;
extern se::Class* __jsb_cocos2d_ScaleTo_class;

bool js_register_cocos2d_ScaleTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ScaleTo_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_ScaleTo_create);
SE_DECLARE_FUNC(js_cocos2dx_ScaleTo_ScaleTo);

extern se::Object* __jsb_cocos2d_ScaleBy_proto;
extern se::Class* __jsb_cocos2d_ScaleBy_class;

bool js_register_cocos2d_ScaleBy(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ScaleBy_create);
SE_DECLARE_FUNC(js_cocos2dx_ScaleBy_ScaleBy);

extern se::Object* __jsb_cocos2d_Blink_proto;
extern se::Class* __jsb_cocos2d_Blink_class;

bool js_register_cocos2d_Blink(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Blink_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_Blink_create);
SE_DECLARE_FUNC(js_cocos2dx_Blink_Blink);

extern se::Object* __jsb_cocos2d_FadeTo_proto;
extern se::Class* __jsb_cocos2d_FadeTo_class;

bool js_register_cocos2d_FadeTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FadeTo_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_FadeTo_create);
SE_DECLARE_FUNC(js_cocos2dx_FadeTo_FadeTo);

extern se::Object* __jsb_cocos2d_FadeIn_proto;
extern se::Class* __jsb_cocos2d_FadeIn_class;

bool js_register_cocos2d_FadeIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FadeIn_setReverseAction);
SE_DECLARE_FUNC(js_cocos2dx_FadeIn_create);
SE_DECLARE_FUNC(js_cocos2dx_FadeIn_FadeIn);

extern se::Object* __jsb_cocos2d_FadeOut_proto;
extern se::Class* __jsb_cocos2d_FadeOut_class;

bool js_register_cocos2d_FadeOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FadeOut_setReverseAction);
SE_DECLARE_FUNC(js_cocos2dx_FadeOut_create);
SE_DECLARE_FUNC(js_cocos2dx_FadeOut_FadeOut);

extern se::Object* __jsb_cocos2d_TintTo_proto;
extern se::Class* __jsb_cocos2d_TintTo_class;

bool js_register_cocos2d_TintTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TintTo_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_TintTo_create);
SE_DECLARE_FUNC(js_cocos2dx_TintTo_TintTo);

extern se::Object* __jsb_cocos2d_TintBy_proto;
extern se::Class* __jsb_cocos2d_TintBy_class;

bool js_register_cocos2d_TintBy(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TintBy_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_TintBy_create);
SE_DECLARE_FUNC(js_cocos2dx_TintBy_TintBy);

extern se::Object* __jsb_cocos2d_DelayTime_proto;
extern se::Class* __jsb_cocos2d_DelayTime_class;

bool js_register_cocos2d_DelayTime(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_DelayTime_create);
SE_DECLARE_FUNC(js_cocos2dx_DelayTime_DelayTime);

extern se::Object* __jsb_cocos2d_ReverseTime_proto;
extern se::Class* __jsb_cocos2d_ReverseTime_class;

bool js_register_cocos2d_ReverseTime(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ReverseTime_initWithAction);
SE_DECLARE_FUNC(js_cocos2dx_ReverseTime_create);
SE_DECLARE_FUNC(js_cocos2dx_ReverseTime_ReverseTime);

extern se::Object* __jsb_cocos2d_Animate_proto;
extern se::Class* __jsb_cocos2d_Animate_class;

bool js_register_cocos2d_Animate(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Animate_initWithAnimation);
SE_DECLARE_FUNC(js_cocos2dx_Animate_getAnimation);
SE_DECLARE_FUNC(js_cocos2dx_Animate_getCurrentFrameIndex);
SE_DECLARE_FUNC(js_cocos2dx_Animate_setAnimation);
SE_DECLARE_FUNC(js_cocos2dx_Animate_create);
SE_DECLARE_FUNC(js_cocos2dx_Animate_Animate);

extern se::Object* __jsb_cocos2d_TargetedAction_proto;
extern se::Class* __jsb_cocos2d_TargetedAction_class;

bool js_register_cocos2d_TargetedAction(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TargetedAction_getForcedTarget);
SE_DECLARE_FUNC(js_cocos2dx_TargetedAction_initWithTarget);
SE_DECLARE_FUNC(js_cocos2dx_TargetedAction_setForcedTarget);
SE_DECLARE_FUNC(js_cocos2dx_TargetedAction_create);
SE_DECLARE_FUNC(js_cocos2dx_TargetedAction_TargetedAction);

extern se::Object* __jsb_cocos2d_ActionFloat_proto;
extern se::Class* __jsb_cocos2d_ActionFloat_class;

bool js_register_cocos2d_ActionFloat(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ActionFloat_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_ActionFloat_create);
SE_DECLARE_FUNC(js_cocos2dx_ActionFloat_ActionFloat);

extern se::Object* __jsb_cocos2d_Configuration_proto;
extern se::Class* __jsb_cocos2d_Configuration_class;

bool js_register_cocos2d_Configuration(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsPVRTC);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsOESDepth24);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_getMaxModelviewStackDepth);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsShareableVAO);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsBGRA8888);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_checkForGLExtension);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsATITC);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsNPOT);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_init);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_getAnimate3DQuality);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_getMaxSupportPointLightInShader);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_getMaxTextureSize);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_setValue);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_getMaxSupportSpotLightInShader);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsETC);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_getMaxSupportDirLightInShader);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_loadConfigFile);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsDiscardFramebuffer);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsOESPackedDepthStencil);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsS3TC);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_getInfo);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_getMaxTextureUnits);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_getValue);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_gatherGPUInfo);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_supportsMapBuffer);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_destroyInstance);
SE_DECLARE_FUNC(js_cocos2dx_Configuration_getInstance);

extern se::Object* __jsb_cocos2d_Properties_proto;
extern se::Class* __jsb_cocos2d_Properties_class;

bool js_register_cocos2d_Properties(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getVariable);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getString);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getLong);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getNamespace);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getPath);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getMat4);
SE_DECLARE_FUNC(js_cocos2dx_Properties_exists);
SE_DECLARE_FUNC(js_cocos2dx_Properties_setString);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getId);
SE_DECLARE_FUNC(js_cocos2dx_Properties_rewind);
SE_DECLARE_FUNC(js_cocos2dx_Properties_setVariable);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getBool);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getColor);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getType);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getNextNamespace);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getInt);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getVec3);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getVec2);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getVec4);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getNextProperty);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getFloat);
SE_DECLARE_FUNC(js_cocos2dx_Properties_getQuaternionFromAxisAngle);
SE_DECLARE_FUNC(js_cocos2dx_Properties_parseColor);
SE_DECLARE_FUNC(js_cocos2dx_Properties_parseVec3);
SE_DECLARE_FUNC(js_cocos2dx_Properties_parseAxisAngle);
SE_DECLARE_FUNC(js_cocos2dx_Properties_parseVec2);
SE_DECLARE_FUNC(js_cocos2dx_Properties_createNonRefCounted);
SE_DECLARE_FUNC(js_cocos2dx_Properties_parseVec4);

extern se::Object* __jsb_cocos2d_FileUtils_proto;
extern se::Class* __jsb_cocos2d_FileUtils_class;

bool js_register_cocos2d_FileUtils(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_fullPathForFilename);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getStringFromFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_removeFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_isAbsolutePath);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_renameFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getDefaultResourceRootPath);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_loadFilenameLookupDictionaryFromFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_isPopupNotify);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getValueVectorFromFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getSearchPaths);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_writeToFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getOriginalSearchPaths);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getNewFilename);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_listFiles);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getValueMapFromFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getFileSize);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getValueMapFromData);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_removeDirectory);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_setSearchPaths);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_writeStringToFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_setSearchResolutionsOrder);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_addSearchResolutionsOrder);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_addSearchPath);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_writeValueVectorToFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_isFileExist);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_purgeCachedEntries);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_fullPathFromRelativeFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getSuitableFOpen);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_writeValueMapToFile);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getFileExtension);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_setWritablePath);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_setPopupNotify);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_isDirectoryExist);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_setDefaultResourceRootPath);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getSearchResolutionsOrder);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_createDirectory);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getWritablePath);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_listFilesRecursively);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_setDelegate);
SE_DECLARE_FUNC(js_cocos2dx_FileUtils_getInstance);

extern se::Object* __jsb_cocos2d_EventAcceleration_proto;
extern se::Class* __jsb_cocos2d_EventAcceleration_class;

bool js_register_cocos2d_EventAcceleration(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);

extern se::Object* __jsb_cocos2d_EventCustom_proto;
extern se::Class* __jsb_cocos2d_EventCustom_class;

bool js_register_cocos2d_EventCustom(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventCustom_getEventName);
SE_DECLARE_FUNC(js_cocos2dx_EventCustom_EventCustom);

extern se::Object* __jsb_cocos2d_EventListener_proto;
extern se::Class* __jsb_cocos2d_EventListener_class;

bool js_register_cocos2d_EventListener(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventListener_setEnabled);
SE_DECLARE_FUNC(js_cocos2dx_EventListener_isEnabled);
SE_DECLARE_FUNC(js_cocos2dx_EventListener_clone);
SE_DECLARE_FUNC(js_cocos2dx_EventListener_checkAvailable);

extern se::Object* __jsb_cocos2d_EventDispatcher_proto;
extern se::Class* __jsb_cocos2d_EventDispatcher_class;

bool js_register_cocos2d_EventDispatcher(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_setEnabled);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_removeAllEventListeners);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_addEventListenerWithSceneGraphPriority);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_addCustomEventListener);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_addEventListenerWithFixedPriority);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_removeEventListenersForTarget);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_resumeEventListenersForTarget);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_setPriority);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_dispatchEvent);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_hasEventListener);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_pauseEventListenersForTarget);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_removeCustomEventListeners);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_removeEventListener);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_isEnabled);
SE_DECLARE_FUNC(js_cocos2dx_EventDispatcher_EventDispatcher);

extern se::Object* __jsb_cocos2d_EventFocus_proto;
extern se::Class* __jsb_cocos2d_EventFocus_class;

bool js_register_cocos2d_EventFocus(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);

extern se::Object* __jsb_cocos2d_EventListenerAcceleration_proto;
extern se::Class* __jsb_cocos2d_EventListenerAcceleration_class;

bool js_register_cocos2d_EventListenerAcceleration(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerAcceleration_init);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerAcceleration_EventListenerAcceleration);

extern se::Object* __jsb_cocos2d_EventListenerCustom_proto;
extern se::Class* __jsb_cocos2d_EventListenerCustom_class;

bool js_register_cocos2d_EventListenerCustom(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerCustom_EventListenerCustom);

extern se::Object* __jsb_cocos2d_EventListenerFocus_proto;
extern se::Class* __jsb_cocos2d_EventListenerFocus_class;

bool js_register_cocos2d_EventListenerFocus(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerFocus_init);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerFocus_EventListenerFocus);

extern se::Object* __jsb_cocos2d_EventListenerKeyboard_proto;
extern se::Class* __jsb_cocos2d_EventListenerKeyboard_class;

bool js_register_cocos2d_EventListenerKeyboard(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerKeyboard_init);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerKeyboard_EventListenerKeyboard);

extern se::Object* __jsb_cocos2d_EventMouse_proto;
extern se::Class* __jsb_cocos2d_EventMouse_class;

bool js_register_cocos2d_EventMouse(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getMouseButton);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getLocation);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_setMouseButton);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_setScrollData);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getPreviousLocationInView);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getDelta);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getStartLocation);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getCursorY);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getCursorX);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getLocationInView);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getScrollY);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_setCursorPosition);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getScrollX);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getPreviousLocation);
SE_DECLARE_FUNC(js_cocos2dx_EventMouse_getStartLocationInView);

extern se::Object* __jsb_cocos2d_EventListenerMouse_proto;
extern se::Class* __jsb_cocos2d_EventListenerMouse_class;

bool js_register_cocos2d_EventListenerMouse(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerMouse_init);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerMouse_EventListenerMouse);

extern se::Object* __jsb_cocos2d_EventListenerTouchOneByOne_proto;
extern se::Class* __jsb_cocos2d_EventListenerTouchOneByOne_class;

bool js_register_cocos2d_EventListenerTouchOneByOne(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerTouchOneByOne_isSwallowTouches);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerTouchOneByOne_setSwallowTouches);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerTouchOneByOne_init);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerTouchOneByOne_EventListenerTouchOneByOne);

extern se::Object* __jsb_cocos2d_EventListenerTouchAllAtOnce_proto;
extern se::Class* __jsb_cocos2d_EventListenerTouchAllAtOnce_class;

bool js_register_cocos2d_EventListenerTouchAllAtOnce(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerTouchAllAtOnce_init);
SE_DECLARE_FUNC(js_cocos2dx_EventListenerTouchAllAtOnce_EventListenerTouchAllAtOnce);

extern se::Object* __jsb_cocos2d_ActionCamera_proto;
extern se::Class* __jsb_cocos2d_ActionCamera_class;

bool js_register_cocos2d_ActionCamera(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ActionCamera_setEye);
SE_DECLARE_FUNC(js_cocos2dx_ActionCamera_getEye);
SE_DECLARE_FUNC(js_cocos2dx_ActionCamera_setUp);
SE_DECLARE_FUNC(js_cocos2dx_ActionCamera_getCenter);
SE_DECLARE_FUNC(js_cocos2dx_ActionCamera_setCenter);
SE_DECLARE_FUNC(js_cocos2dx_ActionCamera_getUp);
SE_DECLARE_FUNC(js_cocos2dx_ActionCamera_ActionCamera);

extern se::Object* __jsb_cocos2d_OrbitCamera_proto;
extern se::Class* __jsb_cocos2d_OrbitCamera_class;

bool js_register_cocos2d_OrbitCamera(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_OrbitCamera_sphericalRadius);
SE_DECLARE_FUNC(js_cocos2dx_OrbitCamera_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_OrbitCamera_create);
SE_DECLARE_FUNC(js_cocos2dx_OrbitCamera_OrbitCamera);

extern se::Object* __jsb_cocos2d_CardinalSplineTo_proto;
extern se::Class* __jsb_cocos2d_CardinalSplineTo_class;

bool js_register_cocos2d_CardinalSplineTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_CardinalSplineTo_updatePosition);
SE_DECLARE_FUNC(js_cocos2dx_CardinalSplineTo_CardinalSplineTo);

extern se::Object* __jsb_cocos2d_CardinalSplineBy_proto;
extern se::Class* __jsb_cocos2d_CardinalSplineBy_class;

bool js_register_cocos2d_CardinalSplineBy(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_CardinalSplineBy_CardinalSplineBy);

extern se::Object* __jsb_cocos2d_CatmullRomTo_proto;
extern se::Class* __jsb_cocos2d_CatmullRomTo_class;

bool js_register_cocos2d_CatmullRomTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);

extern se::Object* __jsb_cocos2d_CatmullRomBy_proto;
extern se::Class* __jsb_cocos2d_CatmullRomBy_class;

bool js_register_cocos2d_CatmullRomBy(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);

extern se::Object* __jsb_cocos2d_ActionEase_proto;
extern se::Class* __jsb_cocos2d_ActionEase_class;

bool js_register_cocos2d_ActionEase(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ActionEase_initWithAction);
SE_DECLARE_FUNC(js_cocos2dx_ActionEase_getInnerAction);

extern se::Object* __jsb_cocos2d_EaseRateAction_proto;
extern se::Class* __jsb_cocos2d_EaseRateAction_class;

bool js_register_cocos2d_EaseRateAction(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseRateAction_setRate);
SE_DECLARE_FUNC(js_cocos2dx_EaseRateAction_initWithAction);
SE_DECLARE_FUNC(js_cocos2dx_EaseRateAction_getRate);
SE_DECLARE_FUNC(js_cocos2dx_EaseRateAction_create);

extern se::Object* __jsb_cocos2d_EaseExponentialIn_proto;
extern se::Class* __jsb_cocos2d_EaseExponentialIn_class;

bool js_register_cocos2d_EaseExponentialIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseExponentialIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseExponentialIn_EaseExponentialIn);

extern se::Object* __jsb_cocos2d_EaseExponentialOut_proto;
extern se::Class* __jsb_cocos2d_EaseExponentialOut_class;

bool js_register_cocos2d_EaseExponentialOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseExponentialOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseExponentialOut_EaseExponentialOut);

extern se::Object* __jsb_cocos2d_EaseExponentialInOut_proto;
extern se::Class* __jsb_cocos2d_EaseExponentialInOut_class;

bool js_register_cocos2d_EaseExponentialInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseExponentialInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseExponentialInOut_EaseExponentialInOut);

extern se::Object* __jsb_cocos2d_EaseSineIn_proto;
extern se::Class* __jsb_cocos2d_EaseSineIn_class;

bool js_register_cocos2d_EaseSineIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseSineIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseSineIn_EaseSineIn);

extern se::Object* __jsb_cocos2d_EaseSineOut_proto;
extern se::Class* __jsb_cocos2d_EaseSineOut_class;

bool js_register_cocos2d_EaseSineOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseSineOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseSineOut_EaseSineOut);

extern se::Object* __jsb_cocos2d_EaseSineInOut_proto;
extern se::Class* __jsb_cocos2d_EaseSineInOut_class;

bool js_register_cocos2d_EaseSineInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseSineInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseSineInOut_EaseSineInOut);

extern se::Object* __jsb_cocos2d_EaseBounce_proto;
extern se::Class* __jsb_cocos2d_EaseBounce_class;

bool js_register_cocos2d_EaseBounce(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);

extern se::Object* __jsb_cocos2d_EaseBounceIn_proto;
extern se::Class* __jsb_cocos2d_EaseBounceIn_class;

bool js_register_cocos2d_EaseBounceIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseBounceIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseBounceIn_EaseBounceIn);

extern se::Object* __jsb_cocos2d_EaseBounceOut_proto;
extern se::Class* __jsb_cocos2d_EaseBounceOut_class;

bool js_register_cocos2d_EaseBounceOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseBounceOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseBounceOut_EaseBounceOut);

extern se::Object* __jsb_cocos2d_EaseBounceInOut_proto;
extern se::Class* __jsb_cocos2d_EaseBounceInOut_class;

bool js_register_cocos2d_EaseBounceInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseBounceInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseBounceInOut_EaseBounceInOut);

extern se::Object* __jsb_cocos2d_EaseBackIn_proto;
extern se::Class* __jsb_cocos2d_EaseBackIn_class;

bool js_register_cocos2d_EaseBackIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseBackIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseBackIn_EaseBackIn);

extern se::Object* __jsb_cocos2d_EaseBackOut_proto;
extern se::Class* __jsb_cocos2d_EaseBackOut_class;

bool js_register_cocos2d_EaseBackOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseBackOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseBackOut_EaseBackOut);

extern se::Object* __jsb_cocos2d_EaseBackInOut_proto;
extern se::Class* __jsb_cocos2d_EaseBackInOut_class;

bool js_register_cocos2d_EaseBackInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseBackInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseBackInOut_EaseBackInOut);

extern se::Object* __jsb_cocos2d_EaseQuadraticActionIn_proto;
extern se::Class* __jsb_cocos2d_EaseQuadraticActionIn_class;

bool js_register_cocos2d_EaseQuadraticActionIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuadraticActionIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuadraticActionIn_EaseQuadraticActionIn);

extern se::Object* __jsb_cocos2d_EaseQuadraticActionOut_proto;
extern se::Class* __jsb_cocos2d_EaseQuadraticActionOut_class;

bool js_register_cocos2d_EaseQuadraticActionOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuadraticActionOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuadraticActionOut_EaseQuadraticActionOut);

extern se::Object* __jsb_cocos2d_EaseQuadraticActionInOut_proto;
extern se::Class* __jsb_cocos2d_EaseQuadraticActionInOut_class;

bool js_register_cocos2d_EaseQuadraticActionInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuadraticActionInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuadraticActionInOut_EaseQuadraticActionInOut);

extern se::Object* __jsb_cocos2d_EaseQuarticActionIn_proto;
extern se::Class* __jsb_cocos2d_EaseQuarticActionIn_class;

bool js_register_cocos2d_EaseQuarticActionIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuarticActionIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuarticActionIn_EaseQuarticActionIn);

extern se::Object* __jsb_cocos2d_EaseQuarticActionOut_proto;
extern se::Class* __jsb_cocos2d_EaseQuarticActionOut_class;

bool js_register_cocos2d_EaseQuarticActionOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuarticActionOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuarticActionOut_EaseQuarticActionOut);

extern se::Object* __jsb_cocos2d_EaseQuarticActionInOut_proto;
extern se::Class* __jsb_cocos2d_EaseQuarticActionInOut_class;

bool js_register_cocos2d_EaseQuarticActionInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuarticActionInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuarticActionInOut_EaseQuarticActionInOut);

extern se::Object* __jsb_cocos2d_EaseQuinticActionIn_proto;
extern se::Class* __jsb_cocos2d_EaseQuinticActionIn_class;

bool js_register_cocos2d_EaseQuinticActionIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuinticActionIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuinticActionIn_EaseQuinticActionIn);

extern se::Object* __jsb_cocos2d_EaseQuinticActionOut_proto;
extern se::Class* __jsb_cocos2d_EaseQuinticActionOut_class;

bool js_register_cocos2d_EaseQuinticActionOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuinticActionOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuinticActionOut_EaseQuinticActionOut);

extern se::Object* __jsb_cocos2d_EaseQuinticActionInOut_proto;
extern se::Class* __jsb_cocos2d_EaseQuinticActionInOut_class;

bool js_register_cocos2d_EaseQuinticActionInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuinticActionInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseQuinticActionInOut_EaseQuinticActionInOut);

extern se::Object* __jsb_cocos2d_EaseCircleActionIn_proto;
extern se::Class* __jsb_cocos2d_EaseCircleActionIn_class;

bool js_register_cocos2d_EaseCircleActionIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseCircleActionIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseCircleActionIn_EaseCircleActionIn);

extern se::Object* __jsb_cocos2d_EaseCircleActionOut_proto;
extern se::Class* __jsb_cocos2d_EaseCircleActionOut_class;

bool js_register_cocos2d_EaseCircleActionOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseCircleActionOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseCircleActionOut_EaseCircleActionOut);

extern se::Object* __jsb_cocos2d_EaseCircleActionInOut_proto;
extern se::Class* __jsb_cocos2d_EaseCircleActionInOut_class;

bool js_register_cocos2d_EaseCircleActionInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseCircleActionInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseCircleActionInOut_EaseCircleActionInOut);

extern se::Object* __jsb_cocos2d_EaseCubicActionIn_proto;
extern se::Class* __jsb_cocos2d_EaseCubicActionIn_class;

bool js_register_cocos2d_EaseCubicActionIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseCubicActionIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseCubicActionIn_EaseCubicActionIn);

extern se::Object* __jsb_cocos2d_EaseCubicActionOut_proto;
extern se::Class* __jsb_cocos2d_EaseCubicActionOut_class;

bool js_register_cocos2d_EaseCubicActionOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseCubicActionOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseCubicActionOut_EaseCubicActionOut);

extern se::Object* __jsb_cocos2d_EaseCubicActionInOut_proto;
extern se::Class* __jsb_cocos2d_EaseCubicActionInOut_class;

bool js_register_cocos2d_EaseCubicActionInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseCubicActionInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseCubicActionInOut_EaseCubicActionInOut);

extern se::Object* __jsb_cocos2d_EaseIn_proto;
extern se::Class* __jsb_cocos2d_EaseIn_class;

bool js_register_cocos2d_EaseIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseIn_EaseIn);

extern se::Object* __jsb_cocos2d_EaseOut_proto;
extern se::Class* __jsb_cocos2d_EaseOut_class;

bool js_register_cocos2d_EaseOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseOut_EaseOut);

extern se::Object* __jsb_cocos2d_EaseInOut_proto;
extern se::Class* __jsb_cocos2d_EaseInOut_class;

bool js_register_cocos2d_EaseInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseInOut_EaseInOut);

extern se::Object* __jsb_cocos2d_EaseElastic_proto;
extern se::Class* __jsb_cocos2d_EaseElastic_class;

bool js_register_cocos2d_EaseElastic(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseElastic_setPeriod);
SE_DECLARE_FUNC(js_cocos2dx_EaseElastic_initWithAction);
SE_DECLARE_FUNC(js_cocos2dx_EaseElastic_getPeriod);

extern se::Object* __jsb_cocos2d_EaseElasticIn_proto;
extern se::Class* __jsb_cocos2d_EaseElasticIn_class;

bool js_register_cocos2d_EaseElasticIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseElasticIn_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseElasticIn_EaseElasticIn);

extern se::Object* __jsb_cocos2d_EaseElasticOut_proto;
extern se::Class* __jsb_cocos2d_EaseElasticOut_class;

bool js_register_cocos2d_EaseElasticOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseElasticOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseElasticOut_EaseElasticOut);

extern se::Object* __jsb_cocos2d_EaseElasticInOut_proto;
extern se::Class* __jsb_cocos2d_EaseElasticInOut_class;

bool js_register_cocos2d_EaseElasticInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseElasticInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseElasticInOut_EaseElasticInOut);

extern se::Object* __jsb_cocos2d_EaseBezierAction_proto;
extern se::Class* __jsb_cocos2d_EaseBezierAction_class;

bool js_register_cocos2d_EaseBezierAction(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_EaseBezierAction_setBezierParamer);
SE_DECLARE_FUNC(js_cocos2dx_EaseBezierAction_create);
SE_DECLARE_FUNC(js_cocos2dx_EaseBezierAction_EaseBezierAction);

extern se::Object* __jsb_cocos2d_ActionInstant_proto;
extern se::Class* __jsb_cocos2d_ActionInstant_class;

bool js_register_cocos2d_ActionInstant(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);

extern se::Object* __jsb_cocos2d_Show_proto;
extern se::Class* __jsb_cocos2d_Show_class;

bool js_register_cocos2d_Show(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Show_create);
SE_DECLARE_FUNC(js_cocos2dx_Show_Show);

extern se::Object* __jsb_cocos2d_Hide_proto;
extern se::Class* __jsb_cocos2d_Hide_class;

bool js_register_cocos2d_Hide(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Hide_create);
SE_DECLARE_FUNC(js_cocos2dx_Hide_Hide);

extern se::Object* __jsb_cocos2d_ToggleVisibility_proto;
extern se::Class* __jsb_cocos2d_ToggleVisibility_class;

bool js_register_cocos2d_ToggleVisibility(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ToggleVisibility_create);
SE_DECLARE_FUNC(js_cocos2dx_ToggleVisibility_ToggleVisibility);

extern se::Object* __jsb_cocos2d_RemoveSelf_proto;
extern se::Class* __jsb_cocos2d_RemoveSelf_class;

bool js_register_cocos2d_RemoveSelf(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_RemoveSelf_init);
SE_DECLARE_FUNC(js_cocos2dx_RemoveSelf_create);
SE_DECLARE_FUNC(js_cocos2dx_RemoveSelf_RemoveSelf);

extern se::Object* __jsb_cocos2d_FlipX_proto;
extern se::Class* __jsb_cocos2d_FlipX_class;

bool js_register_cocos2d_FlipX(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FlipX_initWithFlipX);
SE_DECLARE_FUNC(js_cocos2dx_FlipX_create);
SE_DECLARE_FUNC(js_cocos2dx_FlipX_FlipX);

extern se::Object* __jsb_cocos2d_FlipY_proto;
extern se::Class* __jsb_cocos2d_FlipY_class;

bool js_register_cocos2d_FlipY(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FlipY_initWithFlipY);
SE_DECLARE_FUNC(js_cocos2dx_FlipY_create);
SE_DECLARE_FUNC(js_cocos2dx_FlipY_FlipY);

extern se::Object* __jsb_cocos2d_Place_proto;
extern se::Class* __jsb_cocos2d_Place_class;

bool js_register_cocos2d_Place(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Place_initWithPosition);
SE_DECLARE_FUNC(js_cocos2dx_Place_create);
SE_DECLARE_FUNC(js_cocos2dx_Place_Place);

extern se::Object* __jsb_cocos2d_CallFunc_proto;
extern se::Class* __jsb_cocos2d_CallFunc_class;

bool js_register_cocos2d_CallFunc(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_CallFunc_execute);
SE_DECLARE_FUNC(js_cocos2dx_CallFunc_CallFunc);

extern se::Object* __jsb_cocos2d_CallFuncN_proto;
extern se::Class* __jsb_cocos2d_CallFuncN_class;

bool js_register_cocos2d_CallFuncN(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_CallFuncN_CallFuncN);

extern se::Object* __jsb_cocos2d_GridAction_proto;
extern se::Class* __jsb_cocos2d_GridAction_class;

bool js_register_cocos2d_GridAction(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_GridAction_getGrid);
SE_DECLARE_FUNC(js_cocos2dx_GridAction_initWithDuration);

extern se::Object* __jsb_cocos2d_Grid3DAction_proto;
extern se::Class* __jsb_cocos2d_Grid3DAction_class;

bool js_register_cocos2d_Grid3DAction(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Grid3DAction_getGridRect);

extern se::Object* __jsb_cocos2d_TiledGrid3DAction_proto;
extern se::Class* __jsb_cocos2d_TiledGrid3DAction_class;

bool js_register_cocos2d_TiledGrid3DAction(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);

extern se::Object* __jsb_cocos2d_StopGrid_proto;
extern se::Class* __jsb_cocos2d_StopGrid_class;

bool js_register_cocos2d_StopGrid(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_StopGrid_create);
SE_DECLARE_FUNC(js_cocos2dx_StopGrid_StopGrid);

extern se::Object* __jsb_cocos2d_ReuseGrid_proto;
extern se::Class* __jsb_cocos2d_ReuseGrid_class;

bool js_register_cocos2d_ReuseGrid(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ReuseGrid_initWithTimes);
SE_DECLARE_FUNC(js_cocos2dx_ReuseGrid_create);
SE_DECLARE_FUNC(js_cocos2dx_ReuseGrid_ReuseGrid);

extern se::Object* __jsb_cocos2d_Waves3D_proto;
extern se::Class* __jsb_cocos2d_Waves3D_class;

bool js_register_cocos2d_Waves3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Waves3D_setAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_Waves3D_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_Waves3D_getAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_Waves3D_getAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_Waves3D_setAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_Waves3D_create);
SE_DECLARE_FUNC(js_cocos2dx_Waves3D_Waves3D);

extern se::Object* __jsb_cocos2d_FlipX3D_proto;
extern se::Class* __jsb_cocos2d_FlipX3D_class;

bool js_register_cocos2d_FlipX3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FlipX3D_initWithSize);
SE_DECLARE_FUNC(js_cocos2dx_FlipX3D_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_FlipX3D_create);
SE_DECLARE_FUNC(js_cocos2dx_FlipX3D_FlipX3D);

extern se::Object* __jsb_cocos2d_FlipY3D_proto;
extern se::Class* __jsb_cocos2d_FlipY3D_class;

bool js_register_cocos2d_FlipY3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FlipY3D_create);
SE_DECLARE_FUNC(js_cocos2dx_FlipY3D_FlipY3D);

extern se::Object* __jsb_cocos2d_Lens3D_proto;
extern se::Class* __jsb_cocos2d_Lens3D_class;

bool js_register_cocos2d_Lens3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Lens3D_setConcave);
SE_DECLARE_FUNC(js_cocos2dx_Lens3D_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_Lens3D_setLensEffect);
SE_DECLARE_FUNC(js_cocos2dx_Lens3D_getLensEffect);
SE_DECLARE_FUNC(js_cocos2dx_Lens3D_setPosition);
SE_DECLARE_FUNC(js_cocos2dx_Lens3D_getPosition);
SE_DECLARE_FUNC(js_cocos2dx_Lens3D_create);
SE_DECLARE_FUNC(js_cocos2dx_Lens3D_Lens3D);

extern se::Object* __jsb_cocos2d_Ripple3D_proto;
extern se::Class* __jsb_cocos2d_Ripple3D_class;

bool js_register_cocos2d_Ripple3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Ripple3D_setAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_Ripple3D_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_Ripple3D_getAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_Ripple3D_setAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_Ripple3D_getAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_Ripple3D_setPosition);
SE_DECLARE_FUNC(js_cocos2dx_Ripple3D_getPosition);
SE_DECLARE_FUNC(js_cocos2dx_Ripple3D_create);
SE_DECLARE_FUNC(js_cocos2dx_Ripple3D_Ripple3D);

extern se::Object* __jsb_cocos2d_Shaky3D_proto;
extern se::Class* __jsb_cocos2d_Shaky3D_class;

bool js_register_cocos2d_Shaky3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Shaky3D_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_Shaky3D_create);
SE_DECLARE_FUNC(js_cocos2dx_Shaky3D_Shaky3D);

extern se::Object* __jsb_cocos2d_Liquid_proto;
extern se::Class* __jsb_cocos2d_Liquid_class;

bool js_register_cocos2d_Liquid(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Liquid_setAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_Liquid_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_Liquid_getAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_Liquid_getAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_Liquid_setAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_Liquid_create);
SE_DECLARE_FUNC(js_cocos2dx_Liquid_Liquid);

extern se::Object* __jsb_cocos2d_Waves_proto;
extern se::Class* __jsb_cocos2d_Waves_class;

bool js_register_cocos2d_Waves(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Waves_setAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_Waves_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_Waves_getAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_Waves_getAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_Waves_setAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_Waves_create);
SE_DECLARE_FUNC(js_cocos2dx_Waves_Waves);

extern se::Object* __jsb_cocos2d_Twirl_proto;
extern se::Class* __jsb_cocos2d_Twirl_class;

bool js_register_cocos2d_Twirl(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Twirl_setAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_Twirl_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_Twirl_getAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_Twirl_setAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_Twirl_getAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_Twirl_setPosition);
SE_DECLARE_FUNC(js_cocos2dx_Twirl_getPosition);
SE_DECLARE_FUNC(js_cocos2dx_Twirl_create);
SE_DECLARE_FUNC(js_cocos2dx_Twirl_Twirl);

extern se::Object* __jsb_cocos2d_ActionManager_proto;
extern se::Class* __jsb_cocos2d_ActionManager_class;

bool js_register_cocos2d_ActionManager(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_getActionByTag);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_removeActionByTag);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_removeActionsByFlags);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_removeAllActions);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_addAction);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_resumeTarget);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_update);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_pauseTarget);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_getNumberOfRunningActionsInTarget);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_removeAllActionsFromTarget);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_resumeTargets);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_removeAction);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_pauseAllRunningActions);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_removeAllActionsByTag);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_getNumberOfRunningActionsInTargetByTag);
SE_DECLARE_FUNC(js_cocos2dx_ActionManager_ActionManager);

extern se::Object* __jsb_cocos2d_PageTurn3D_proto;
extern se::Class* __jsb_cocos2d_PageTurn3D_class;

bool js_register_cocos2d_PageTurn3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_PageTurn3D_create);

extern se::Object* __jsb_cocos2d_ProgressTo_proto;
extern se::Class* __jsb_cocos2d_ProgressTo_class;

bool js_register_cocos2d_ProgressTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTo_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTo_create);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTo_ProgressTo);

extern se::Object* __jsb_cocos2d_ProgressFromTo_proto;
extern se::Class* __jsb_cocos2d_ProgressFromTo_class;

bool js_register_cocos2d_ProgressFromTo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ProgressFromTo_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_ProgressFromTo_create);
SE_DECLARE_FUNC(js_cocos2dx_ProgressFromTo_ProgressFromTo);

extern se::Object* __jsb_cocos2d_ShakyTiles3D_proto;
extern se::Class* __jsb_cocos2d_ShakyTiles3D_class;

bool js_register_cocos2d_ShakyTiles3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ShakyTiles3D_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_ShakyTiles3D_create);
SE_DECLARE_FUNC(js_cocos2dx_ShakyTiles3D_ShakyTiles3D);

extern se::Object* __jsb_cocos2d_ShatteredTiles3D_proto;
extern se::Class* __jsb_cocos2d_ShatteredTiles3D_class;

bool js_register_cocos2d_ShatteredTiles3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ShatteredTiles3D_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_ShatteredTiles3D_create);
SE_DECLARE_FUNC(js_cocos2dx_ShatteredTiles3D_ShatteredTiles3D);

extern se::Object* __jsb_cocos2d_ShuffleTiles_proto;
extern se::Class* __jsb_cocos2d_ShuffleTiles_class;

bool js_register_cocos2d_ShuffleTiles(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ShuffleTiles_placeTile);
SE_DECLARE_FUNC(js_cocos2dx_ShuffleTiles_shuffle);
SE_DECLARE_FUNC(js_cocos2dx_ShuffleTiles_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_ShuffleTiles_getDelta);
SE_DECLARE_FUNC(js_cocos2dx_ShuffleTiles_create);
SE_DECLARE_FUNC(js_cocos2dx_ShuffleTiles_ShuffleTiles);

extern se::Object* __jsb_cocos2d_FadeOutTRTiles_proto;
extern se::Class* __jsb_cocos2d_FadeOutTRTiles_class;

bool js_register_cocos2d_FadeOutTRTiles(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutTRTiles_turnOnTile);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutTRTiles_turnOffTile);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutTRTiles_transformTile);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutTRTiles_testFunc);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutTRTiles_create);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutTRTiles_FadeOutTRTiles);

extern se::Object* __jsb_cocos2d_FadeOutBLTiles_proto;
extern se::Class* __jsb_cocos2d_FadeOutBLTiles_class;

bool js_register_cocos2d_FadeOutBLTiles(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutBLTiles_create);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutBLTiles_FadeOutBLTiles);

extern se::Object* __jsb_cocos2d_FadeOutUpTiles_proto;
extern se::Class* __jsb_cocos2d_FadeOutUpTiles_class;

bool js_register_cocos2d_FadeOutUpTiles(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutUpTiles_create);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutUpTiles_FadeOutUpTiles);

extern se::Object* __jsb_cocos2d_FadeOutDownTiles_proto;
extern se::Class* __jsb_cocos2d_FadeOutDownTiles_class;

bool js_register_cocos2d_FadeOutDownTiles(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutDownTiles_create);
SE_DECLARE_FUNC(js_cocos2dx_FadeOutDownTiles_FadeOutDownTiles);

extern se::Object* __jsb_cocos2d_TurnOffTiles_proto;
extern se::Class* __jsb_cocos2d_TurnOffTiles_class;

bool js_register_cocos2d_TurnOffTiles(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TurnOffTiles_turnOnTile);
SE_DECLARE_FUNC(js_cocos2dx_TurnOffTiles_turnOffTile);
SE_DECLARE_FUNC(js_cocos2dx_TurnOffTiles_shuffle);
SE_DECLARE_FUNC(js_cocos2dx_TurnOffTiles_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_TurnOffTiles_create);
SE_DECLARE_FUNC(js_cocos2dx_TurnOffTiles_TurnOffTiles);

extern se::Object* __jsb_cocos2d_WavesTiles3D_proto;
extern se::Class* __jsb_cocos2d_WavesTiles3D_class;

bool js_register_cocos2d_WavesTiles3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_WavesTiles3D_setAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_WavesTiles3D_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_WavesTiles3D_getAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_WavesTiles3D_getAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_WavesTiles3D_setAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_WavesTiles3D_create);
SE_DECLARE_FUNC(js_cocos2dx_WavesTiles3D_WavesTiles3D);

extern se::Object* __jsb_cocos2d_JumpTiles3D_proto;
extern se::Class* __jsb_cocos2d_JumpTiles3D_class;

bool js_register_cocos2d_JumpTiles3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_JumpTiles3D_setAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_JumpTiles3D_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_JumpTiles3D_getAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_JumpTiles3D_getAmplitudeRate);
SE_DECLARE_FUNC(js_cocos2dx_JumpTiles3D_setAmplitude);
SE_DECLARE_FUNC(js_cocos2dx_JumpTiles3D_create);
SE_DECLARE_FUNC(js_cocos2dx_JumpTiles3D_JumpTiles3D);

extern se::Object* __jsb_cocos2d_SplitRows_proto;
extern se::Class* __jsb_cocos2d_SplitRows_class;

bool js_register_cocos2d_SplitRows(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_SplitRows_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_SplitRows_create);
SE_DECLARE_FUNC(js_cocos2dx_SplitRows_SplitRows);

extern se::Object* __jsb_cocos2d_SplitCols_proto;
extern se::Class* __jsb_cocos2d_SplitCols_class;

bool js_register_cocos2d_SplitCols(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_SplitCols_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_SplitCols_create);
SE_DECLARE_FUNC(js_cocos2dx_SplitCols_SplitCols);

extern se::Object* __jsb_cocos2d_ActionTween_proto;
extern se::Class* __jsb_cocos2d_ActionTween_class;

bool js_register_cocos2d_ActionTween(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ActionTween_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_ActionTween_create);

extern se::Object* __jsb_cocos2d_AtlasNode_proto;
extern se::Class* __jsb_cocos2d_AtlasNode_class;

bool js_register_cocos2d_AtlasNode(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_updateAtlasValues);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_initWithTileFile);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_getTexture);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_setTextureAtlas);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_getQuadsToDraw);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_setTexture);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_initWithTexture);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_setQuadsToDraw);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_create);
SE_DECLARE_FUNC(js_cocos2dx_AtlasNode_AtlasNode);

extern se::Object* __jsb_cocos2d_ClippingNode_proto;
extern se::Class* __jsb_cocos2d_ClippingNode_class;

bool js_register_cocos2d_ClippingNode(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ClippingNode_hasContent);
SE_DECLARE_FUNC(js_cocos2dx_ClippingNode_setInverted);
SE_DECLARE_FUNC(js_cocos2dx_ClippingNode_setStencil);
SE_DECLARE_FUNC(js_cocos2dx_ClippingNode_getAlphaThreshold);
SE_DECLARE_FUNC(js_cocos2dx_ClippingNode_getStencil);
SE_DECLARE_FUNC(js_cocos2dx_ClippingNode_setAlphaThreshold);
SE_DECLARE_FUNC(js_cocos2dx_ClippingNode_isInverted);
SE_DECLARE_FUNC(js_cocos2dx_ClippingNode_create);
SE_DECLARE_FUNC(js_cocos2dx_ClippingNode_ClippingNode);

extern se::Object* __jsb_cocos2d_DrawNode_proto;
extern se::Class* __jsb_cocos2d_DrawNode_class;

bool js_register_cocos2d_DrawNode(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawLine);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawPoints);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawRect);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawSolidCircle);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_setLineWidth);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_onDrawGLPoint);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawPolygon);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawDot);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawCatmullRom);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawSegment);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_onDraw);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawCircle);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawQuadBezier);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_onDrawGLLine);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawSolidPoly);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawTriangle);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_clear);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawCardinalSpline);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawSolidRect);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_getLineWidth);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawPoint);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_drawCubicBezier);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_create);
SE_DECLARE_FUNC(js_cocos2dx_DrawNode_DrawNode);

extern se::Object* __jsb_cocos2d_Label_proto;
extern se::Class* __jsb_cocos2d_Label_class;

bool js_register_cocos2d_Label(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Label_isClipMarginEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Label_enableShadow);
SE_DECLARE_FUNC(js_cocos2dx_Label_setDimensions);
SE_DECLARE_FUNC(js_cocos2dx_Label_getWidth);
SE_DECLARE_FUNC(js_cocos2dx_Label_getString);
SE_DECLARE_FUNC(js_cocos2dx_Label_getHeight);
SE_DECLARE_FUNC(js_cocos2dx_Label_disableEffect);
SE_DECLARE_FUNC(js_cocos2dx_Label_getTextColor);
SE_DECLARE_FUNC(js_cocos2dx_Label_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_Label_enableWrap);
SE_DECLARE_FUNC(js_cocos2dx_Label_setWidth);
SE_DECLARE_FUNC(js_cocos2dx_Label_getAdditionalKerning);
SE_DECLARE_FUNC(js_cocos2dx_Label_getBMFontSize);
SE_DECLARE_FUNC(js_cocos2dx_Label_getMaxLineWidth);
SE_DECLARE_FUNC(js_cocos2dx_Label_getHorizontalAlignment);
SE_DECLARE_FUNC(js_cocos2dx_Label_getShadowOffset);
SE_DECLARE_FUNC(js_cocos2dx_Label_getLineSpacing);
SE_DECLARE_FUNC(js_cocos2dx_Label_setClipMarginEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Label_setString);
SE_DECLARE_FUNC(js_cocos2dx_Label_setSystemFontName);
SE_DECLARE_FUNC(js_cocos2dx_Label_isWrapEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Label_getOutlineSize);
SE_DECLARE_FUNC(js_cocos2dx_Label_setBMFontFilePath);
SE_DECLARE_FUNC(js_cocos2dx_Label_initWithTTF);
SE_DECLARE_FUNC(js_cocos2dx_Label_setLineHeight);
SE_DECLARE_FUNC(js_cocos2dx_Label_setSystemFontSize);
SE_DECLARE_FUNC(js_cocos2dx_Label_setOverflow);
SE_DECLARE_FUNC(js_cocos2dx_Label_enableStrikethrough);
SE_DECLARE_FUNC(js_cocos2dx_Label_updateContent);
SE_DECLARE_FUNC(js_cocos2dx_Label_getStringLength);
SE_DECLARE_FUNC(js_cocos2dx_Label_setLineBreakWithoutSpace);
SE_DECLARE_FUNC(js_cocos2dx_Label_getStringNumLines);
SE_DECLARE_FUNC(js_cocos2dx_Label_enableOutline);
SE_DECLARE_FUNC(js_cocos2dx_Label_getShadowBlurRadius);
SE_DECLARE_FUNC(js_cocos2dx_Label_getEffectColor);
SE_DECLARE_FUNC(js_cocos2dx_Label_removeAllChildrenWithCleanup);
SE_DECLARE_FUNC(js_cocos2dx_Label_setCharMap);
SE_DECLARE_FUNC(js_cocos2dx_Label_getDimensions);
SE_DECLARE_FUNC(js_cocos2dx_Label_setMaxLineWidth);
SE_DECLARE_FUNC(js_cocos2dx_Label_getSystemFontName);
SE_DECLARE_FUNC(js_cocos2dx_Label_setVerticalAlignment);
SE_DECLARE_FUNC(js_cocos2dx_Label_setLineSpacing);
SE_DECLARE_FUNC(js_cocos2dx_Label_getLineHeight);
SE_DECLARE_FUNC(js_cocos2dx_Label_getShadowColor);
SE_DECLARE_FUNC(js_cocos2dx_Label_getTTFConfig);
SE_DECLARE_FUNC(js_cocos2dx_Label_enableItalics);
SE_DECLARE_FUNC(js_cocos2dx_Label_setTextColor);
SE_DECLARE_FUNC(js_cocos2dx_Label_getLetter);
SE_DECLARE_FUNC(js_cocos2dx_Label_setHeight);
SE_DECLARE_FUNC(js_cocos2dx_Label_isShadowEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Label_enableGlow);
SE_DECLARE_FUNC(js_cocos2dx_Label_getOverflow);
SE_DECLARE_FUNC(js_cocos2dx_Label_getVerticalAlignment);
SE_DECLARE_FUNC(js_cocos2dx_Label_setAdditionalKerning);
SE_DECLARE_FUNC(js_cocos2dx_Label_getSystemFontSize);
SE_DECLARE_FUNC(js_cocos2dx_Label_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_Label_getTextAlignment);
SE_DECLARE_FUNC(js_cocos2dx_Label_getBMFontFilePath);
SE_DECLARE_FUNC(js_cocos2dx_Label_setHorizontalAlignment);
SE_DECLARE_FUNC(js_cocos2dx_Label_enableBold);
SE_DECLARE_FUNC(js_cocos2dx_Label_enableUnderline);
SE_DECLARE_FUNC(js_cocos2dx_Label_getLabelEffectType);
SE_DECLARE_FUNC(js_cocos2dx_Label_setAlignment);
SE_DECLARE_FUNC(js_cocos2dx_Label_requestSystemFontRefresh);
SE_DECLARE_FUNC(js_cocos2dx_Label_setBMFontSize);
SE_DECLARE_FUNC(js_cocos2dx_Label_createWithBMFont);
SE_DECLARE_FUNC(js_cocos2dx_Label_create);
SE_DECLARE_FUNC(js_cocos2dx_Label_createWithCharMap);
SE_DECLARE_FUNC(js_cocos2dx_Label_createWithSystemFont);
SE_DECLARE_FUNC(js_cocos2dx_Label_Label);

extern se::Object* __jsb_cocos2d_LabelAtlas_proto;
extern se::Class* __jsb_cocos2d_LabelAtlas_class;

bool js_register_cocos2d_LabelAtlas(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_LabelAtlas_setString);
SE_DECLARE_FUNC(js_cocos2dx_LabelAtlas_initWithString);
SE_DECLARE_FUNC(js_cocos2dx_LabelAtlas_getString);
SE_DECLARE_FUNC(js_cocos2dx_LabelAtlas_create);
SE_DECLARE_FUNC(js_cocos2dx_LabelAtlas_LabelAtlas);

extern se::Object* __jsb_cocos2d_LabelBMFont_proto;
extern se::Class* __jsb_cocos2d_LabelBMFont_class;

bool js_register_cocos2d_LabelBMFont(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_setLineBreakWithoutSpace);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_getLetter);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_getString);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_setString);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_initWithString);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_getFntFile);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_setFntFile);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_setAlignment);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_setWidth);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_create);
SE_DECLARE_FUNC(js_cocos2dx_LabelBMFont_LabelBMFont);

extern se::Object* __jsb_cocos2d_LabelTTF_proto;
extern se::Class* __jsb_cocos2d_LabelTTF_class;

bool js_register_cocos2d_LabelTTF(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_enableShadow);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setDimensions);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_getFontSize);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_getString);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setFlippedY);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setFlippedX);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setTextDefinition);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setFontName);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_getHorizontalAlignment);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_initWithStringAndTextDefinition);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setString);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_initWithString);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setFontFillColor);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_enableStroke);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_getDimensions);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setVerticalAlignment);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setFontSize);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_getVerticalAlignment);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_getTextDefinition);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_getFontName);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_setHorizontalAlignment);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_disableShadow);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_disableStroke);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_create);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_createWithFontDefinition);
SE_DECLARE_FUNC(js_cocos2dx_LabelTTF_LabelTTF);

extern se::Object* __jsb_cocos2d_Layer_proto;
extern se::Class* __jsb_cocos2d_Layer_class;

bool js_register_cocos2d_Layer(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Layer_create);
SE_DECLARE_FUNC(js_cocos2dx_Layer_Layer);

extern se::Object* __jsb_cocos2d___LayerRGBA_proto;
extern se::Class* __jsb_cocos2d___LayerRGBA_class;

bool js_register_cocos2d___LayerRGBA(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx___LayerRGBA_create);
SE_DECLARE_FUNC(js_cocos2dx___LayerRGBA___LayerRGBA);

extern se::Object* __jsb_cocos2d_LayerColor_proto;
extern se::Class* __jsb_cocos2d_LayerColor_class;

bool js_register_cocos2d_LayerColor(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_LayerColor_changeWidthAndHeight);
SE_DECLARE_FUNC(js_cocos2dx_LayerColor_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_LayerColor_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_LayerColor_changeWidth);
SE_DECLARE_FUNC(js_cocos2dx_LayerColor_initWithColor);
SE_DECLARE_FUNC(js_cocos2dx_LayerColor_changeHeight);
SE_DECLARE_FUNC(js_cocos2dx_LayerColor_create);
SE_DECLARE_FUNC(js_cocos2dx_LayerColor_LayerColor);

extern se::Object* __jsb_cocos2d_LayerGradient_proto;
extern se::Class* __jsb_cocos2d_LayerGradient_class;

bool js_register_cocos2d_LayerGradient(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_getStartColor);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_isCompressedInterpolation);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_getStartOpacity);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_setVector);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_setStartOpacity);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_setCompressedInterpolation);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_setEndOpacity);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_getVector);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_setEndColor);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_initWithColor);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_getEndColor);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_getEndOpacity);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_setStartColor);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_create);
SE_DECLARE_FUNC(js_cocos2dx_LayerGradient_LayerGradient);

extern se::Object* __jsb_cocos2d_LayerMultiplex_proto;
extern se::Class* __jsb_cocos2d_LayerMultiplex_class;

bool js_register_cocos2d_LayerMultiplex(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_LayerMultiplex_initWithArray);
SE_DECLARE_FUNC(js_cocos2dx_LayerMultiplex_switchToAndReleaseMe);
SE_DECLARE_FUNC(js_cocos2dx_LayerMultiplex_addLayer);
SE_DECLARE_FUNC(js_cocos2dx_LayerMultiplex_switchTo);
SE_DECLARE_FUNC(js_cocos2dx_LayerMultiplex_LayerMultiplex);

extern se::Object* __jsb_cocos2d_MenuItem_proto;
extern se::Class* __jsb_cocos2d_MenuItem_class;

bool js_register_cocos2d_MenuItem(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItem_setEnabled);
SE_DECLARE_FUNC(js_cocos2dx_MenuItem_activate);
SE_DECLARE_FUNC(js_cocos2dx_MenuItem_initWithCallback);
SE_DECLARE_FUNC(js_cocos2dx_MenuItem_isEnabled);
SE_DECLARE_FUNC(js_cocos2dx_MenuItem_selected);
SE_DECLARE_FUNC(js_cocos2dx_MenuItem_isSelected);
SE_DECLARE_FUNC(js_cocos2dx_MenuItem_setCallback);
SE_DECLARE_FUNC(js_cocos2dx_MenuItem_unselected);
SE_DECLARE_FUNC(js_cocos2dx_MenuItem_rect);
SE_DECLARE_FUNC(js_cocos2dx_MenuItem_MenuItem);

extern se::Object* __jsb_cocos2d_MenuItemLabel_proto;
extern se::Class* __jsb_cocos2d_MenuItemLabel_class;

bool js_register_cocos2d_MenuItemLabel(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemLabel_setLabel);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemLabel_getString);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemLabel_getDisabledColor);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemLabel_setString);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemLabel_initWithLabel);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemLabel_setDisabledColor);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemLabel_getLabel);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemLabel_MenuItemLabel);

extern se::Object* __jsb_cocos2d_MenuItemAtlasFont_proto;
extern se::Class* __jsb_cocos2d_MenuItemAtlasFont_class;

bool js_register_cocos2d_MenuItemAtlasFont(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemAtlasFont_initWithString);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemAtlasFont_MenuItemAtlasFont);

extern se::Object* __jsb_cocos2d_MenuItemFont_proto;
extern se::Class* __jsb_cocos2d_MenuItemFont_class;

bool js_register_cocos2d_MenuItemFont(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemFont_setFontNameObj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemFont_getFontSizeObj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemFont_setFontSizeObj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemFont_initWithString);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemFont_getFontNameObj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemFont_setFontName);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemFont_getFontSize);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemFont_getFontName);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemFont_setFontSize);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemFont_MenuItemFont);

extern se::Object* __jsb_cocos2d_MenuItemSprite_proto;
extern se::Class* __jsb_cocos2d_MenuItemSprite_class;

bool js_register_cocos2d_MenuItemSprite(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_setEnabled);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_selected);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_setNormalImage);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_setDisabledImage);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_initWithNormalSprite);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_setSelectedImage);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_getDisabledImage);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_getSelectedImage);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_getNormalImage);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_unselected);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemSprite_MenuItemSprite);

extern se::Object* __jsb_cocos2d_MenuItemImage_proto;
extern se::Class* __jsb_cocos2d_MenuItemImage_class;

bool js_register_cocos2d_MenuItemImage(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemImage_setDisabledSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemImage_setSelectedSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemImage_setNormalSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemImage_init);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemImage_initWithNormalImage);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemImage_MenuItemImage);

extern se::Object* __jsb_cocos2d_MenuItemToggle_proto;
extern se::Class* __jsb_cocos2d_MenuItemToggle_class;

bool js_register_cocos2d_MenuItemToggle(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemToggle_setSubItems);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemToggle_initWithItem);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemToggle_getSubItems);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemToggle_getSelectedIndex);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemToggle_addSubItem);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemToggle_getSelectedItem);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemToggle_setSelectedIndex);
SE_DECLARE_FUNC(js_cocos2dx_MenuItemToggle_MenuItemToggle);

extern se::Object* __jsb_cocos2d_Menu_proto;
extern se::Class* __jsb_cocos2d_Menu_class;

bool js_register_cocos2d_Menu(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Menu_initWithArray);
SE_DECLARE_FUNC(js_cocos2dx_Menu_setEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Menu_alignItemsVertically);
SE_DECLARE_FUNC(js_cocos2dx_Menu_isEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Menu_alignItemsHorizontally);
SE_DECLARE_FUNC(js_cocos2dx_Menu_alignItemsHorizontallyWithPadding);
SE_DECLARE_FUNC(js_cocos2dx_Menu_alignItemsVerticallyWithPadding);
SE_DECLARE_FUNC(js_cocos2dx_Menu_alignItemsInRowsWithArray);
SE_DECLARE_FUNC(js_cocos2dx_Menu_alignItemsInColumnsWithArray);
SE_DECLARE_FUNC(js_cocos2dx_Menu_Menu);

extern se::Object* __jsb_cocos2d_MotionStreak_proto;
extern se::Class* __jsb_cocos2d_MotionStreak_class;

bool js_register_cocos2d_MotionStreak(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_reset);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_setTexture);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_getTexture);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_tintWithColor);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_setStartingPositionInitialized);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_isStartingPositionInitialized);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_isFastMode);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_getStroke);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_initWithFade);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_setFastMode);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_setStroke);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_create);
SE_DECLARE_FUNC(js_cocos2dx_MotionStreak_MotionStreak);

extern se::Object* __jsb_cocos2d_NodeGrid_proto;
extern se::Class* __jsb_cocos2d_NodeGrid_class;

bool js_register_cocos2d_NodeGrid(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_NodeGrid_setTarget);
SE_DECLARE_FUNC(js_cocos2dx_NodeGrid_getGrid);
SE_DECLARE_FUNC(js_cocos2dx_NodeGrid_getGridRect);
SE_DECLARE_FUNC(js_cocos2dx_NodeGrid_create);
SE_DECLARE_FUNC(js_cocos2dx_NodeGrid_NodeGrid);

extern se::Object* __jsb_cocos2d_ParticleBatchNode_proto;
extern se::Class* __jsb_cocos2d_ParticleBatchNode_class;

bool js_register_cocos2d_ParticleBatchNode(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_setTexture);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_initWithTexture);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_disableParticle);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_getTexture);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_setTextureAtlas);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_initWithFile);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_removeAllChildrenWithCleanup);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_insertChild);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_removeChildAtIndex);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_createWithTexture);
SE_DECLARE_FUNC(js_cocos2dx_ParticleBatchNode_ParticleBatchNode);

extern se::Object* __jsb_cocos2d_ParticleSystem_proto;
extern se::Class* __jsb_cocos2d_ParticleSystem_class;

bool js_register_cocos2d_ParticleSystem(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getStartSizeVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getTexture);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_isFull);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getBatchNode);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getStartColor);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getPositionType);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setPosVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getEndSpin);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setRotatePerSecondVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getStartSpinVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getRadialAccelVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getEndSizeVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setTangentialAccel);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getRadialAccel);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setStartRadius);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setRotatePerSecond);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setEndSize);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getGravity);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_resumeEmissions);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getTangentialAccel);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setEndRadius);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getSpeed);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_pauseEmissions);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getAngle);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setEndColor);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setStartSpin);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setDuration);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_addParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setTexture);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getPosVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_updateWithNoTime);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_isBlendAdditive);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getSpeedVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setPositionType);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_stopSystem);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getSourcePosition);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setLifeVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setEndColorVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getAtlasIndex);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getStartSize);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setStartSpinVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_resetSystem);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setAtlasIndex);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setTangentialAccelVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setEndRadiusVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getEndRadius);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_isActive);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setRadialAccelVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setStartSize);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setSpeed);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getStartSpin);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getResourceFile);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getRotatePerSecond);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setEmitterMode);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getDuration);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setSourcePosition);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_stop);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_updateParticleQuads);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getEndSpinVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setBlendAdditive);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setLife);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setAngleVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setRotationIsDir);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_start);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setEndSizeVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setAngle);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setBatchNode);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getTangentialAccelVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getEmitterMode);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setEndSpinVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_initWithFile);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getAngleVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setStartColor);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getRotatePerSecondVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getEndSize);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getLife);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_isPaused);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setSpeedVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setAutoRemoveOnFinish);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setGravity);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_postStep);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setEmissionRate);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getEndColorVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getRotationIsDir);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getEmissionRate);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getEndColor);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getLifeVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setStartSizeVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getStartRadius);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getParticleCount);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getStartRadiusVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setStartColorVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setEndSpin);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setRadialAccel);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_initWithDictionary);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_isAutoRemoveOnFinish);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setStartRadiusVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getEndRadiusVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_getStartColorVar);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystem_ParticleSystem);

extern se::Object* __jsb_cocos2d_ParticleSystemQuad_proto;
extern se::Class* __jsb_cocos2d_ParticleSystemQuad_class;

bool js_register_cocos2d_ParticleSystemQuad(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystemQuad_setDisplayFrame);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystemQuad_setTextureWithRect);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystemQuad_listenRendererRecreated);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystemQuad_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystemQuad_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSystemQuad_ParticleSystemQuad);

extern se::Object* __jsb_cocos2d_ParticleFire_proto;
extern se::Class* __jsb_cocos2d_ParticleFire_class;

bool js_register_cocos2d_ParticleFire(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFire_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFire_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFire_ParticleFire);

extern se::Object* __jsb_cocos2d_ParticleFireworks_proto;
extern se::Class* __jsb_cocos2d_ParticleFireworks_class;

bool js_register_cocos2d_ParticleFireworks(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFireworks_init);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFireworks_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFireworks_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFireworks_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFireworks_ParticleFireworks);

extern se::Object* __jsb_cocos2d_ParticleSun_proto;
extern se::Class* __jsb_cocos2d_ParticleSun_class;

bool js_register_cocos2d_ParticleSun(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSun_init);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSun_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSun_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSun_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSun_ParticleSun);

extern se::Object* __jsb_cocos2d_ParticleGalaxy_proto;
extern se::Class* __jsb_cocos2d_ParticleGalaxy_class;

bool js_register_cocos2d_ParticleGalaxy(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleGalaxy_init);
SE_DECLARE_FUNC(js_cocos2dx_ParticleGalaxy_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleGalaxy_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleGalaxy_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleGalaxy_ParticleGalaxy);

extern se::Object* __jsb_cocos2d_ParticleFlower_proto;
extern se::Class* __jsb_cocos2d_ParticleFlower_class;

bool js_register_cocos2d_ParticleFlower(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFlower_init);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFlower_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFlower_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFlower_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleFlower_ParticleFlower);

extern se::Object* __jsb_cocos2d_ParticleMeteor_proto;
extern se::Class* __jsb_cocos2d_ParticleMeteor_class;

bool js_register_cocos2d_ParticleMeteor(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleMeteor_init);
SE_DECLARE_FUNC(js_cocos2dx_ParticleMeteor_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleMeteor_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleMeteor_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleMeteor_ParticleMeteor);

extern se::Object* __jsb_cocos2d_ParticleSpiral_proto;
extern se::Class* __jsb_cocos2d_ParticleSpiral_class;

bool js_register_cocos2d_ParticleSpiral(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSpiral_init);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSpiral_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSpiral_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSpiral_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSpiral_ParticleSpiral);

extern se::Object* __jsb_cocos2d_ParticleExplosion_proto;
extern se::Class* __jsb_cocos2d_ParticleExplosion_class;

bool js_register_cocos2d_ParticleExplosion(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleExplosion_init);
SE_DECLARE_FUNC(js_cocos2dx_ParticleExplosion_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleExplosion_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleExplosion_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleExplosion_ParticleExplosion);

extern se::Object* __jsb_cocos2d_ParticleSmoke_proto;
extern se::Class* __jsb_cocos2d_ParticleSmoke_class;

bool js_register_cocos2d_ParticleSmoke(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSmoke_init);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSmoke_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSmoke_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSmoke_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSmoke_ParticleSmoke);

extern se::Object* __jsb_cocos2d_ParticleSnow_proto;
extern se::Class* __jsb_cocos2d_ParticleSnow_class;

bool js_register_cocos2d_ParticleSnow(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSnow_init);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSnow_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSnow_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSnow_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleSnow_ParticleSnow);

extern se::Object* __jsb_cocos2d_ParticleRain_proto;
extern se::Class* __jsb_cocos2d_ParticleRain_class;

bool js_register_cocos2d_ParticleRain(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParticleRain_init);
SE_DECLARE_FUNC(js_cocos2dx_ParticleRain_initWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleRain_create);
SE_DECLARE_FUNC(js_cocos2dx_ParticleRain_createWithTotalParticles);
SE_DECLARE_FUNC(js_cocos2dx_ParticleRain_ParticleRain);

extern se::Object* __jsb_cocos2d_ProgressTimer_proto;
extern se::Class* __jsb_cocos2d_ProgressTimer_class;

bool js_register_cocos2d_ProgressTimer(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_initWithSprite);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_isReverseDirection);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_setBarChangeRate);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_getPercentage);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_setSprite);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_getType);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_getSprite);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_setMidpoint);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_getBarChangeRate);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_setReverseDirection);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_getMidpoint);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_setPercentage);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_setType);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_create);
SE_DECLARE_FUNC(js_cocos2dx_ProgressTimer_ProgressTimer);

extern se::Object* __jsb_cocos2d_ProtectedNode_proto;
extern se::Class* __jsb_cocos2d_ProtectedNode_class;

bool js_register_cocos2d_ProtectedNode(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_addProtectedChild);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_disableCascadeColor);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_removeProtectedChildByTag);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_reorderProtectedChild);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_removeAllProtectedChildrenWithCleanup);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_disableCascadeOpacity);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_sortAllProtectedChildren);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_getProtectedChildByTag);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_removeProtectedChild);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_removeAllProtectedChildren);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_create);
SE_DECLARE_FUNC(js_cocos2dx_ProtectedNode_ProtectedNode);

extern se::Object* __jsb_cocos2d_Sprite_proto;
extern se::Class* __jsb_cocos2d_Sprite_class;

bool js_register_cocos2d_Sprite(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setTexture);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getTexture);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setFlippedY);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setFlippedX);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setRotationSkewX);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setRotationSkewY);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getResourceType);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setDisplayFrameWithAnimationName);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getBatchNode);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getOffsetPosition);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getCenterRect);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_removeAllChildrenWithCleanup);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setCenterRectNormalized);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_isStretchEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setTextureRect);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_initWithSpriteFrameName);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setStretchEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_isFrameDisplayed);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getAtlasIndex);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setBatchNode);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setCenterRect);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setTextureAtlas);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getResourceName);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_isDirty);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getCenterRectNormalized);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setAtlasIndex);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_initWithTexture);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setDirty);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_isTextureRectRotated);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_getTextureRect);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_initWithFile);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_initWithSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_isFlippedX);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_isFlippedY);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_setVertexRect);
SE_DECLARE_FUNC(js_cocos2dx_Sprite_Sprite);

extern se::Object* __jsb_cocos2d_RenderTexture_proto;
extern se::Class* __jsb_cocos2d_RenderTexture_class;

bool js_register_cocos2d_RenderTexture(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_setVirtualViewport);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_clearStencil);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_getClearDepth);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_getClearStencil);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_end);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_setClearStencil);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_setSprite);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_getSprite);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_isAutoDraw);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_setKeepMatrix);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_setClearFlags);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_begin);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_setAutoDraw);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_setClearColor);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_beginWithClear);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_clearDepth);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_getClearColor);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_clear);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_getClearFlags);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_newImage);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_setClearDepth);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_initWithWidthAndHeight);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_create);
SE_DECLARE_FUNC(js_cocos2dx_RenderTexture_RenderTexture);

extern se::Object* __jsb_cocos2d_TransitionEaseScene_proto;
extern se::Class* __jsb_cocos2d_TransitionEaseScene_class;

bool js_register_cocos2d_TransitionEaseScene(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionEaseScene_easeActionWithAction);

extern se::Object* __jsb_cocos2d_TransitionScene_proto;
extern se::Class* __jsb_cocos2d_TransitionScene_class;

bool js_register_cocos2d_TransitionScene(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionScene_getInScene);
SE_DECLARE_FUNC(js_cocos2dx_TransitionScene_finish);
SE_DECLARE_FUNC(js_cocos2dx_TransitionScene_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_TransitionScene_getDuration);
SE_DECLARE_FUNC(js_cocos2dx_TransitionScene_hideOutShowIn);
SE_DECLARE_FUNC(js_cocos2dx_TransitionScene_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionScene_TransitionScene);

extern se::Object* __jsb_cocos2d_TransitionSceneOriented_proto;
extern se::Class* __jsb_cocos2d_TransitionSceneOriented_class;

bool js_register_cocos2d_TransitionSceneOriented(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSceneOriented_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSceneOriented_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSceneOriented_TransitionSceneOriented);

extern se::Object* __jsb_cocos2d_TransitionRotoZoom_proto;
extern se::Class* __jsb_cocos2d_TransitionRotoZoom_class;

bool js_register_cocos2d_TransitionRotoZoom(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionRotoZoom_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionRotoZoom_TransitionRotoZoom);

extern se::Object* __jsb_cocos2d_TransitionJumpZoom_proto;
extern se::Class* __jsb_cocos2d_TransitionJumpZoom_class;

bool js_register_cocos2d_TransitionJumpZoom(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionJumpZoom_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionJumpZoom_TransitionJumpZoom);

extern se::Object* __jsb_cocos2d_TransitionMoveInL_proto;
extern se::Class* __jsb_cocos2d_TransitionMoveInL_class;

bool js_register_cocos2d_TransitionMoveInL(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionMoveInL_action);
SE_DECLARE_FUNC(js_cocos2dx_TransitionMoveInL_easeActionWithAction);
SE_DECLARE_FUNC(js_cocos2dx_TransitionMoveInL_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionMoveInL_TransitionMoveInL);

extern se::Object* __jsb_cocos2d_TransitionMoveInR_proto;
extern se::Class* __jsb_cocos2d_TransitionMoveInR_class;

bool js_register_cocos2d_TransitionMoveInR(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionMoveInR_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionMoveInR_TransitionMoveInR);

extern se::Object* __jsb_cocos2d_TransitionMoveInT_proto;
extern se::Class* __jsb_cocos2d_TransitionMoveInT_class;

bool js_register_cocos2d_TransitionMoveInT(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionMoveInT_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionMoveInT_TransitionMoveInT);

extern se::Object* __jsb_cocos2d_TransitionMoveInB_proto;
extern se::Class* __jsb_cocos2d_TransitionMoveInB_class;

bool js_register_cocos2d_TransitionMoveInB(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionMoveInB_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionMoveInB_TransitionMoveInB);

extern se::Object* __jsb_cocos2d_TransitionSlideInL_proto;
extern se::Class* __jsb_cocos2d_TransitionSlideInL_class;

bool js_register_cocos2d_TransitionSlideInL(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSlideInL_action);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSlideInL_easeActionWithAction);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSlideInL_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSlideInL_TransitionSlideInL);

extern se::Object* __jsb_cocos2d_TransitionSlideInR_proto;
extern se::Class* __jsb_cocos2d_TransitionSlideInR_class;

bool js_register_cocos2d_TransitionSlideInR(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSlideInR_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSlideInR_TransitionSlideInR);

extern se::Object* __jsb_cocos2d_TransitionSlideInB_proto;
extern se::Class* __jsb_cocos2d_TransitionSlideInB_class;

bool js_register_cocos2d_TransitionSlideInB(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSlideInB_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSlideInB_TransitionSlideInB);

extern se::Object* __jsb_cocos2d_TransitionSlideInT_proto;
extern se::Class* __jsb_cocos2d_TransitionSlideInT_class;

bool js_register_cocos2d_TransitionSlideInT(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSlideInT_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSlideInT_TransitionSlideInT);

extern se::Object* __jsb_cocos2d_TransitionShrinkGrow_proto;
extern se::Class* __jsb_cocos2d_TransitionShrinkGrow_class;

bool js_register_cocos2d_TransitionShrinkGrow(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionShrinkGrow_easeActionWithAction);
SE_DECLARE_FUNC(js_cocos2dx_TransitionShrinkGrow_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionShrinkGrow_TransitionShrinkGrow);

extern se::Object* __jsb_cocos2d_TransitionFlipX_proto;
extern se::Class* __jsb_cocos2d_TransitionFlipX_class;

bool js_register_cocos2d_TransitionFlipX(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFlipX_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFlipX_TransitionFlipX);

extern se::Object* __jsb_cocos2d_TransitionFlipY_proto;
extern se::Class* __jsb_cocos2d_TransitionFlipY_class;

bool js_register_cocos2d_TransitionFlipY(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFlipY_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFlipY_TransitionFlipY);

extern se::Object* __jsb_cocos2d_TransitionFlipAngular_proto;
extern se::Class* __jsb_cocos2d_TransitionFlipAngular_class;

bool js_register_cocos2d_TransitionFlipAngular(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFlipAngular_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFlipAngular_TransitionFlipAngular);

extern se::Object* __jsb_cocos2d_TransitionZoomFlipX_proto;
extern se::Class* __jsb_cocos2d_TransitionZoomFlipX_class;

bool js_register_cocos2d_TransitionZoomFlipX(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionZoomFlipX_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionZoomFlipX_TransitionZoomFlipX);

extern se::Object* __jsb_cocos2d_TransitionZoomFlipY_proto;
extern se::Class* __jsb_cocos2d_TransitionZoomFlipY_class;

bool js_register_cocos2d_TransitionZoomFlipY(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionZoomFlipY_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionZoomFlipY_TransitionZoomFlipY);

extern se::Object* __jsb_cocos2d_TransitionZoomFlipAngular_proto;
extern se::Class* __jsb_cocos2d_TransitionZoomFlipAngular_class;

bool js_register_cocos2d_TransitionZoomFlipAngular(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionZoomFlipAngular_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionZoomFlipAngular_TransitionZoomFlipAngular);

extern se::Object* __jsb_cocos2d_TransitionFade_proto;
extern se::Class* __jsb_cocos2d_TransitionFade_class;

bool js_register_cocos2d_TransitionFade(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFade_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFade_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFade_TransitionFade);

extern se::Object* __jsb_cocos2d_TransitionCrossFade_proto;
extern se::Class* __jsb_cocos2d_TransitionCrossFade_class;

bool js_register_cocos2d_TransitionCrossFade(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionCrossFade_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionCrossFade_TransitionCrossFade);

extern se::Object* __jsb_cocos2d_TransitionTurnOffTiles_proto;
extern se::Class* __jsb_cocos2d_TransitionTurnOffTiles_class;

bool js_register_cocos2d_TransitionTurnOffTiles(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionTurnOffTiles_easeActionWithAction);
SE_DECLARE_FUNC(js_cocos2dx_TransitionTurnOffTiles_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionTurnOffTiles_TransitionTurnOffTiles);

extern se::Object* __jsb_cocos2d_TransitionSplitCols_proto;
extern se::Class* __jsb_cocos2d_TransitionSplitCols_class;

bool js_register_cocos2d_TransitionSplitCols(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSplitCols_action);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSplitCols_easeActionWithAction);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSplitCols_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSplitCols_TransitionSplitCols);

extern se::Object* __jsb_cocos2d_TransitionSplitRows_proto;
extern se::Class* __jsb_cocos2d_TransitionSplitRows_class;

bool js_register_cocos2d_TransitionSplitRows(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSplitRows_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionSplitRows_TransitionSplitRows);

extern se::Object* __jsb_cocos2d_TransitionFadeTR_proto;
extern se::Class* __jsb_cocos2d_TransitionFadeTR_class;

bool js_register_cocos2d_TransitionFadeTR(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFadeTR_easeActionWithAction);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFadeTR_actionWithSize);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFadeTR_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFadeTR_TransitionFadeTR);

extern se::Object* __jsb_cocos2d_TransitionFadeBL_proto;
extern se::Class* __jsb_cocos2d_TransitionFadeBL_class;

bool js_register_cocos2d_TransitionFadeBL(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFadeBL_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFadeBL_TransitionFadeBL);

extern se::Object* __jsb_cocos2d_TransitionFadeUp_proto;
extern se::Class* __jsb_cocos2d_TransitionFadeUp_class;

bool js_register_cocos2d_TransitionFadeUp(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFadeUp_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFadeUp_TransitionFadeUp);

extern se::Object* __jsb_cocos2d_TransitionFadeDown_proto;
extern se::Class* __jsb_cocos2d_TransitionFadeDown_class;

bool js_register_cocos2d_TransitionFadeDown(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFadeDown_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionFadeDown_TransitionFadeDown);

extern se::Object* __jsb_cocos2d_TransitionPageTurn_proto;
extern se::Class* __jsb_cocos2d_TransitionPageTurn_class;

bool js_register_cocos2d_TransitionPageTurn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionPageTurn_actionWithSize);
SE_DECLARE_FUNC(js_cocos2dx_TransitionPageTurn_initWithDuration);
SE_DECLARE_FUNC(js_cocos2dx_TransitionPageTurn_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionPageTurn_TransitionPageTurn);

extern se::Object* __jsb_cocos2d_TransitionProgress_proto;
extern se::Class* __jsb_cocos2d_TransitionProgress_class;

bool js_register_cocos2d_TransitionProgress(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgress_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgress_TransitionProgress);

extern se::Object* __jsb_cocos2d_TransitionProgressRadialCCW_proto;
extern se::Class* __jsb_cocos2d_TransitionProgressRadialCCW_class;

bool js_register_cocos2d_TransitionProgressRadialCCW(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressRadialCCW_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressRadialCCW_TransitionProgressRadialCCW);

extern se::Object* __jsb_cocos2d_TransitionProgressRadialCW_proto;
extern se::Class* __jsb_cocos2d_TransitionProgressRadialCW_class;

bool js_register_cocos2d_TransitionProgressRadialCW(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressRadialCW_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressRadialCW_TransitionProgressRadialCW);

extern se::Object* __jsb_cocos2d_TransitionProgressHorizontal_proto;
extern se::Class* __jsb_cocos2d_TransitionProgressHorizontal_class;

bool js_register_cocos2d_TransitionProgressHorizontal(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressHorizontal_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressHorizontal_TransitionProgressHorizontal);

extern se::Object* __jsb_cocos2d_TransitionProgressVertical_proto;
extern se::Class* __jsb_cocos2d_TransitionProgressVertical_class;

bool js_register_cocos2d_TransitionProgressVertical(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressVertical_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressVertical_TransitionProgressVertical);

extern se::Object* __jsb_cocos2d_TransitionProgressInOut_proto;
extern se::Class* __jsb_cocos2d_TransitionProgressInOut_class;

bool js_register_cocos2d_TransitionProgressInOut(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressInOut_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressInOut_TransitionProgressInOut);

extern se::Object* __jsb_cocos2d_TransitionProgressOutIn_proto;
extern se::Class* __jsb_cocos2d_TransitionProgressOutIn_class;

bool js_register_cocos2d_TransitionProgressOutIn(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressOutIn_create);
SE_DECLARE_FUNC(js_cocos2dx_TransitionProgressOutIn_TransitionProgressOutIn);

extern se::Object* __jsb_cocos2d_Camera_proto;
extern se::Class* __jsb_cocos2d_Camera_class;

bool js_register_cocos2d_Camera(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Camera_restore);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getDepth);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getViewProjectionMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Camera_applyViewport);
SE_DECLARE_FUNC(js_cocos2dx_Camera_setBackgroundBrush);
SE_DECLARE_FUNC(js_cocos2dx_Camera_lookAt);
SE_DECLARE_FUNC(js_cocos2dx_Camera_apply);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getBackgroundBrush);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getProjectionMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Camera_isBrushValid);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getDepthInView);
SE_DECLARE_FUNC(js_cocos2dx_Camera_restoreViewport);
SE_DECLARE_FUNC(js_cocos2dx_Camera_clearBackground);
SE_DECLARE_FUNC(js_cocos2dx_Camera_setAdditionalProjection);
SE_DECLARE_FUNC(js_cocos2dx_Camera_setViewport);
SE_DECLARE_FUNC(js_cocos2dx_Camera_initDefault);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getCameraFlag);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getType);
SE_DECLARE_FUNC(js_cocos2dx_Camera_initOrthographic);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getRenderOrder);
SE_DECLARE_FUNC(js_cocos2dx_Camera_setDepth);
SE_DECLARE_FUNC(js_cocos2dx_Camera_setScene);
SE_DECLARE_FUNC(js_cocos2dx_Camera_projectGL);
SE_DECLARE_FUNC(js_cocos2dx_Camera_restoreFrameBufferObject);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getViewMatrix);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getNearPlane);
SE_DECLARE_FUNC(js_cocos2dx_Camera_project);
SE_DECLARE_FUNC(js_cocos2dx_Camera_setCameraFlag);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getFarPlane);
SE_DECLARE_FUNC(js_cocos2dx_Camera_applyFrameBufferObject);
SE_DECLARE_FUNC(js_cocos2dx_Camera_setFrameBufferObject);
SE_DECLARE_FUNC(js_cocos2dx_Camera_isViewProjectionUpdated);
SE_DECLARE_FUNC(js_cocos2dx_Camera_initPerspective);
SE_DECLARE_FUNC(js_cocos2dx_Camera_createOrthographic);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getVisitingCamera);
SE_DECLARE_FUNC(js_cocos2dx_Camera_create);
SE_DECLARE_FUNC(js_cocos2dx_Camera_createPerspective);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getDefaultViewport);
SE_DECLARE_FUNC(js_cocos2dx_Camera_setDefaultViewport);
SE_DECLARE_FUNC(js_cocos2dx_Camera_getDefaultCamera);
SE_DECLARE_FUNC(js_cocos2dx_Camera_Camera);

extern se::Object* __jsb_cocos2d_CameraBackgroundBrush_proto;
extern se::Class* __jsb_cocos2d_CameraBackgroundBrush_class;

bool js_register_cocos2d_CameraBackgroundBrush(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundBrush_getBrushType);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundBrush_drawBackground);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundBrush_init);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundBrush_isValid);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundBrush_createSkyboxBrush);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundBrush_createColorBrush);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundBrush_createNoneBrush);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundBrush_createDepthBrush);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundBrush_CameraBackgroundBrush);

extern se::Object* __jsb_cocos2d_CameraBackgroundDepthBrush_proto;
extern se::Class* __jsb_cocos2d_CameraBackgroundDepthBrush_class;

bool js_register_cocos2d_CameraBackgroundDepthBrush(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundDepthBrush_setDepth);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundDepthBrush_create);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundDepthBrush_CameraBackgroundDepthBrush);

extern se::Object* __jsb_cocos2d_CameraBackgroundColorBrush_proto;
extern se::Class* __jsb_cocos2d_CameraBackgroundColorBrush_class;

bool js_register_cocos2d_CameraBackgroundColorBrush(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundColorBrush_setColor);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundColorBrush_create);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundColorBrush_CameraBackgroundColorBrush);

extern se::Object* __jsb_cocos2d_CameraBackgroundSkyBoxBrush_proto;
extern se::Class* __jsb_cocos2d_CameraBackgroundSkyBoxBrush_class;

bool js_register_cocos2d_CameraBackgroundSkyBoxBrush(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundSkyBoxBrush_setTextureValid);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundSkyBoxBrush_setTexture);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundSkyBoxBrush_setActived);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundSkyBoxBrush_isActived);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundSkyBoxBrush_create);
SE_DECLARE_FUNC(js_cocos2dx_CameraBackgroundSkyBoxBrush_CameraBackgroundSkyBoxBrush);

extern se::Object* __jsb_cocos2d_GridBase_proto;
extern se::Class* __jsb_cocos2d_GridBase_class;

bool js_register_cocos2d_GridBase(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_setGridSize);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_setGridRect);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_afterBlit);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_getGridRect);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_afterDraw);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_beforeDraw);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_calculateVertexPoints);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_isTextureFlipped);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_getGridSize);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_getStep);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_set2DProjection);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_setStep);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_setTextureFlipped);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_blit);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_setActive);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_getReuseGrid);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_initWithSize);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_beforeBlit);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_setReuseGrid);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_isActive);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_reuse);
SE_DECLARE_FUNC(js_cocos2dx_GridBase_create);

extern se::Object* __jsb_cocos2d_Grid3D_proto;
extern se::Class* __jsb_cocos2d_Grid3D_class;

bool js_register_cocos2d_Grid3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Grid3D_getNeedDepthTestForBlit);
SE_DECLARE_FUNC(js_cocos2dx_Grid3D_setNeedDepthTestForBlit);
SE_DECLARE_FUNC(js_cocos2dx_Grid3D_create);
SE_DECLARE_FUNC(js_cocos2dx_Grid3D_Grid3D);

extern se::Object* __jsb_cocos2d_TiledGrid3D_proto;
extern se::Class* __jsb_cocos2d_TiledGrid3D_class;

bool js_register_cocos2d_TiledGrid3D(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TiledGrid3D_create);
SE_DECLARE_FUNC(js_cocos2dx_TiledGrid3D_TiledGrid3D);

extern se::Object* __jsb_cocos2d_BaseLight_proto;
extern se::Class* __jsb_cocos2d_BaseLight_class;

bool js_register_cocos2d_BaseLight(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_BaseLight_setEnabled);
SE_DECLARE_FUNC(js_cocos2dx_BaseLight_getIntensity);
SE_DECLARE_FUNC(js_cocos2dx_BaseLight_isEnabled);
SE_DECLARE_FUNC(js_cocos2dx_BaseLight_getLightType);
SE_DECLARE_FUNC(js_cocos2dx_BaseLight_setLightFlag);
SE_DECLARE_FUNC(js_cocos2dx_BaseLight_setIntensity);
SE_DECLARE_FUNC(js_cocos2dx_BaseLight_getLightFlag);

extern se::Object* __jsb_cocos2d_DirectionLight_proto;
extern se::Class* __jsb_cocos2d_DirectionLight_class;

bool js_register_cocos2d_DirectionLight(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_DirectionLight_getDirection);
SE_DECLARE_FUNC(js_cocos2dx_DirectionLight_getDirectionInWorld);
SE_DECLARE_FUNC(js_cocos2dx_DirectionLight_setDirection);
SE_DECLARE_FUNC(js_cocos2dx_DirectionLight_create);
SE_DECLARE_FUNC(js_cocos2dx_DirectionLight_DirectionLight);

extern se::Object* __jsb_cocos2d_PointLight_proto;
extern se::Class* __jsb_cocos2d_PointLight_class;

bool js_register_cocos2d_PointLight(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_PointLight_getRange);
SE_DECLARE_FUNC(js_cocos2dx_PointLight_setRange);
SE_DECLARE_FUNC(js_cocos2dx_PointLight_create);
SE_DECLARE_FUNC(js_cocos2dx_PointLight_PointLight);

extern se::Object* __jsb_cocos2d_SpotLight_proto;
extern se::Class* __jsb_cocos2d_SpotLight_class;

bool js_register_cocos2d_SpotLight(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_getRange);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_setDirection);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_getCosInnerAngle);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_getOuterAngle);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_getInnerAngle);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_getDirection);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_getCosOuterAngle);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_setOuterAngle);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_setInnerAngle);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_getDirectionInWorld);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_setRange);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_create);
SE_DECLARE_FUNC(js_cocos2dx_SpotLight_SpotLight);

extern se::Object* __jsb_cocos2d_AmbientLight_proto;
extern se::Class* __jsb_cocos2d_AmbientLight_class;

bool js_register_cocos2d_AmbientLight(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_AmbientLight_create);
SE_DECLARE_FUNC(js_cocos2dx_AmbientLight_AmbientLight);

extern se::Object* __jsb_cocos2d_GLProgram_proto;
extern se::Class* __jsb_cocos2d_GLProgram_class;

bool js_register_cocos2d_GLProgram(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_getFragmentShaderLog);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_bindAttribLocation);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_getUniformLocationForName);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_use);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_getVertexShaderLog);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_getUniform);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_initWithByteArrays);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_setUniformLocationWith1f);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_initWithFilenames);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_setUniformLocationWith3f);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_setUniformsForBuiltins);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_setUniformLocationWith3i);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_setUniformLocationWith4f);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_updateUniforms);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_getUniformLocation);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_link);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_reset);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_getAttribLocation);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_setUniformLocationWith2f);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_setUniformLocationWith4i);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_setUniformLocationWith1i);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_setUniformLocationWith2i);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_createWithByteArrays);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_createWithFilenames);
SE_DECLARE_FUNC(js_cocos2dx_GLProgram_GLProgram);

extern se::Object* __jsb_cocos2d_GLProgramCache_proto;
extern se::Class* __jsb_cocos2d_GLProgramCache_class;

bool js_register_cocos2d_GLProgramCache(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramCache_loadDefaultGLPrograms);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramCache_reloadDefaultGLProgramsRelativeToLights);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramCache_addGLProgram);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramCache_reloadDefaultGLPrograms);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramCache_getGLProgram);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramCache_destroyInstance);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramCache_getInstance);
SE_DECLARE_FUNC(js_cocos2dx_GLProgramCache_GLProgramCache);

extern se::Object* __jsb_cocos2d_RenderState_proto;
extern se::Class* __jsb_cocos2d_RenderState_class;

bool js_register_cocos2d_RenderState(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_RenderState_setTexture);
SE_DECLARE_FUNC(js_cocos2dx_RenderState_getTopmost);
SE_DECLARE_FUNC(js_cocos2dx_RenderState_getTexture);
SE_DECLARE_FUNC(js_cocos2dx_RenderState_bind);
SE_DECLARE_FUNC(js_cocos2dx_RenderState_getName);
SE_DECLARE_FUNC(js_cocos2dx_RenderState_setParent);
SE_DECLARE_FUNC(js_cocos2dx_RenderState_initialize);
SE_DECLARE_FUNC(js_cocos2dx_RenderState_finalize);

extern se::Object* __jsb_cocos2d_Pass_proto;
extern se::Class* __jsb_cocos2d_Pass_class;

bool js_register_cocos2d_Pass(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Pass_unbind);
SE_DECLARE_FUNC(js_cocos2dx_Pass_bind);
SE_DECLARE_FUNC(js_cocos2dx_Pass_clone);
SE_DECLARE_FUNC(js_cocos2dx_Pass_getGLProgramState);
SE_DECLARE_FUNC(js_cocos2dx_Pass_getHash);
SE_DECLARE_FUNC(js_cocos2dx_Pass_setVertexAttribBinding);
SE_DECLARE_FUNC(js_cocos2dx_Pass_create);
SE_DECLARE_FUNC(js_cocos2dx_Pass_createWithGLProgramState);

extern se::Object* __jsb_cocos2d_Technique_proto;
extern se::Class* __jsb_cocos2d_Technique_class;

bool js_register_cocos2d_Technique(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Technique_getPassCount);
SE_DECLARE_FUNC(js_cocos2dx_Technique_clone);
SE_DECLARE_FUNC(js_cocos2dx_Technique_addPass);
SE_DECLARE_FUNC(js_cocos2dx_Technique_getPasses);
SE_DECLARE_FUNC(js_cocos2dx_Technique_getName);
SE_DECLARE_FUNC(js_cocos2dx_Technique_getPassByIndex);
SE_DECLARE_FUNC(js_cocos2dx_Technique_create);
SE_DECLARE_FUNC(js_cocos2dx_Technique_createWithGLProgramState);

extern se::Object* __jsb_cocos2d_Material_proto;
extern se::Class* __jsb_cocos2d_Material_class;

bool js_register_cocos2d_Material(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Material_clone);
SE_DECLARE_FUNC(js_cocos2dx_Material_getTechniqueCount);
SE_DECLARE_FUNC(js_cocos2dx_Material_setName);
SE_DECLARE_FUNC(js_cocos2dx_Material_getTechniqueByIndex);
SE_DECLARE_FUNC(js_cocos2dx_Material_getName);
SE_DECLARE_FUNC(js_cocos2dx_Material_getTechniques);
SE_DECLARE_FUNC(js_cocos2dx_Material_setTechnique);
SE_DECLARE_FUNC(js_cocos2dx_Material_getTechniqueByName);
SE_DECLARE_FUNC(js_cocos2dx_Material_addTechnique);
SE_DECLARE_FUNC(js_cocos2dx_Material_getTechnique);
SE_DECLARE_FUNC(js_cocos2dx_Material_createWithFilename);
SE_DECLARE_FUNC(js_cocos2dx_Material_createWithGLStateProgram);
SE_DECLARE_FUNC(js_cocos2dx_Material_createWithProperties);

extern se::Object* __jsb_cocos2d_TextureCache_proto;
extern se::Class* __jsb_cocos2d_TextureCache_class;

bool js_register_cocos2d_TextureCache(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_reloadTexture);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_unbindAllImageAsync);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_removeTextureForKey);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_removeAllTextures);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_addImageAsync);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_getDescription);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_getCachedTextureInfo);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_addImage);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_unbindImageAsync);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_getTextureForKey);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_getTextureFilePath);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_renameTextureWithKey);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_removeUnusedTextures);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_removeTexture);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_waitForQuit);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_setETC1AlphaFileSuffix);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_getETC1AlphaFileSuffix);
SE_DECLARE_FUNC(js_cocos2dx_TextureCache_TextureCache);

extern se::Object* __jsb_cocos2d_Device_proto;
extern se::Class* __jsb_cocos2d_Device_class;

bool js_register_cocos2d_Device(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Device_setAccelerometerEnabled);
SE_DECLARE_FUNC(js_cocos2dx_Device_setAccelerometerInterval);
SE_DECLARE_FUNC(js_cocos2dx_Device_setKeepScreenOn);
SE_DECLARE_FUNC(js_cocos2dx_Device_vibrate);
SE_DECLARE_FUNC(js_cocos2dx_Device_getDPI);

extern se::Object* __jsb_cocos2d_SAXParser_proto;
extern se::Class* __jsb_cocos2d_SAXParser_class;

bool js_register_cocos2d_SAXParser(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_SAXParser_init);

extern se::Object* __jsb_cocos2d_Application_proto;
extern se::Class* __jsb_cocos2d_Application_class;

bool js_register_cocos2d_Application(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_Application_getTargetPlatform);
SE_DECLARE_FUNC(js_cocos2dx_Application_getCurrentLanguage);
SE_DECLARE_FUNC(js_cocos2dx_Application_openURL);
SE_DECLARE_FUNC(js_cocos2dx_Application_getVersion);
SE_DECLARE_FUNC(js_cocos2dx_Application_getInstance);

extern se::Object* __jsb_cocos2d_AnimationCache_proto;
extern se::Class* __jsb_cocos2d_AnimationCache_class;

bool js_register_cocos2d_AnimationCache(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_AnimationCache_getAnimation);
SE_DECLARE_FUNC(js_cocos2dx_AnimationCache_addAnimation);
SE_DECLARE_FUNC(js_cocos2dx_AnimationCache_init);
SE_DECLARE_FUNC(js_cocos2dx_AnimationCache_addAnimationsWithDictionary);
SE_DECLARE_FUNC(js_cocos2dx_AnimationCache_removeAnimation);
SE_DECLARE_FUNC(js_cocos2dx_AnimationCache_addAnimationsWithFile);
SE_DECLARE_FUNC(js_cocos2dx_AnimationCache_destroyInstance);
SE_DECLARE_FUNC(js_cocos2dx_AnimationCache_getInstance);
SE_DECLARE_FUNC(js_cocos2dx_AnimationCache_AnimationCache);

extern se::Object* __jsb_cocos2d_SpriteBatchNode_proto;
extern se::Class* __jsb_cocos2d_SpriteBatchNode_class;

bool js_register_cocos2d_SpriteBatchNode(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_appendChild);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_reorderBatch);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_getTexture);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_setTexture);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_removeChildAtIndex);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_removeSpriteFromAtlas);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_addSpriteWithoutQuad);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_atlasIndexForChild);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_increaseAtlasCapacity);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_lowestAtlasIndexInChild);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_getBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_initWithTexture);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_setTextureAtlas);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_reserveCapacity);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_insertQuadFromSprite);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_initWithFile);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_setBlendFunc);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_rebuildIndexInOrder);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_highestAtlasIndexInChild);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_create);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_createWithTexture);
SE_DECLARE_FUNC(js_cocos2dx_SpriteBatchNode_SpriteBatchNode);

extern se::Object* __jsb_cocos2d_SpriteFrameCache_proto;
extern se::Class* __jsb_cocos2d_SpriteFrameCache_class;

bool js_register_cocos2d_SpriteFrameCache(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_reloadTexture);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_addSpriteFramesWithFileContent);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_addSpriteFrame);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_addSpriteFramesWithFile);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_getSpriteFrameByName);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_removeSpriteFramesFromFile);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_init);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_removeSpriteFrames);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_removeUnusedSpriteFrames);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_removeSpriteFramesFromFileContent);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_removeSpriteFrameByName);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_isSpriteFramesWithFileLoaded);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_removeSpriteFramesFromTexture);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_destroyInstance);
SE_DECLARE_FUNC(js_cocos2dx_SpriteFrameCache_getInstance);

extern se::Object* __jsb_cocos2d_TextFieldTTF_proto;
extern se::Class* __jsb_cocos2d_TextFieldTTF_class;

bool js_register_cocos2d_TextFieldTTF(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_getCharCount);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_setCursorChar);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_setSecureTextEntry);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_setCursorEnabled);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_getColorSpaceHolder);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_initWithPlaceHolder);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_appendString);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_getPasswordTextStyle);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_setPasswordTextStyle);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_setColorSpaceHolder);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_detachWithIME);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_setPlaceHolder);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_setCursorFromPoint);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_isSecureTextEntry);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_getPlaceHolder);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_setCursorPosition);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_attachWithIME);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_textFieldWithPlaceHolder);
SE_DECLARE_FUNC(js_cocos2dx_TextFieldTTF_TextFieldTTF);

extern se::Object* __jsb_cocos2d_ParallaxNode_proto;
extern se::Class* __jsb_cocos2d_ParallaxNode_class;

bool js_register_cocos2d_ParallaxNode(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_ParallaxNode_addChild);
SE_DECLARE_FUNC(js_cocos2dx_ParallaxNode_removeAllChildrenWithCleanup);
SE_DECLARE_FUNC(js_cocos2dx_ParallaxNode_setParallaxArray);
SE_DECLARE_FUNC(js_cocos2dx_ParallaxNode_create);
SE_DECLARE_FUNC(js_cocos2dx_ParallaxNode_ParallaxNode);

extern se::Object* __jsb_cocos2d_TMXObjectGroup_proto;
extern se::Class* __jsb_cocos2d_TMXObjectGroup_class;

bool js_register_cocos2d_TMXObjectGroup(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_setPositionOffset);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_getProperty);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_getPositionOffset);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_getObject);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_getObjects);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_setGroupName);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_getProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_getGroupName);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_setProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_setObjects);
SE_DECLARE_FUNC(js_cocos2dx_TMXObjectGroup_TMXObjectGroup);

extern se::Object* __jsb_cocos2d_TMXLayerInfo_proto;
extern se::Class* __jsb_cocos2d_TMXLayerInfo_class;

bool js_register_cocos2d_TMXLayerInfo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayerInfo_setProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayerInfo_getProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayerInfo_TMXLayerInfo);

extern se::Object* __jsb_cocos2d_TMXTilesetInfo_proto;
extern se::Class* __jsb_cocos2d_TMXTilesetInfo_class;

bool js_register_cocos2d_TMXTilesetInfo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TMXTilesetInfo_getRectForGID);
SE_DECLARE_FUNC(js_cocos2dx_TMXTilesetInfo_TMXTilesetInfo);

extern se::Object* __jsb_cocos2d_TMXMapInfo_proto;
extern se::Class* __jsb_cocos2d_TMXMapInfo_class;

bool js_register_cocos2d_TMXMapInfo(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setCurrentString);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getHexSideLength);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setTileSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_initWithTMXFile);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getOrientation);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setObjectGroups);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setLayers);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_parseXMLFile);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getParentElement);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setTMXFileName);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_parseXMLString);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getLayers);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getStaggerAxis);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setHexSideLength);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getTilesets);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getParentGID);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setParentElement);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_initWithXML);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setParentGID);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getLayerAttribs);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getTileSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getTileProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_isStoringCharacters);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getExternalTilesetFileName);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getObjectGroups);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getTMXFileName);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setStaggerIndex);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setOrientation);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setTileProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setMapSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getCurrentString);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setStoringCharacters);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setStaggerAxis);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getMapSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setTilesets);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_getStaggerIndex);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_setLayerAttribs);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_create);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_createWithXML);
SE_DECLARE_FUNC(js_cocos2dx_TMXMapInfo_TMXMapInfo);

extern se::Object* __jsb_cocos2d_TMXLayer_proto;
extern se::Class* __jsb_cocos2d_TMXLayer_class;

bool js_register_cocos2d_TMXLayer(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_getTileGIDAt);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_getPositionAt);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_setLayerOrientation);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_releaseMap);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_setTiles);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_getLayerSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_setMapTileSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_getLayerOrientation);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_setProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_setLayerName);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_removeTileAt);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_initWithTilesetInfo);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_setupTiles);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_setTileGID);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_getMapTileSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_getProperty);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_setLayerSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_getLayerName);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_setTileSet);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_getTileSet);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_getProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_getTileAt);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_create);
SE_DECLARE_FUNC(js_cocos2dx_TMXLayer_TMXLayer);

extern se::Object* __jsb_cocos2d_TMXTiledMap_proto;
extern se::Class* __jsb_cocos2d_TMXTiledMap_class;

bool js_register_cocos2d_TMXTiledMap(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_setObjectGroups);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getProperty);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getLayerNum);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_setMapSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getObjectGroup);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getObjectGroups);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getResourceFile);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_initWithTMXFile);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getTileSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getMapSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_initWithXML);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getPropertiesForGID);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_setTileSize);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_setProperties);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getLayer);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_getMapOrientation);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_setMapOrientation);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_create);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_createWithXML);
SE_DECLARE_FUNC(js_cocos2dx_TMXTiledMap_TMXTiledMap);

extern se::Object* __jsb_cocos2d_TileMapAtlas_proto;
extern se::Class* __jsb_cocos2d_TileMapAtlas_class;

bool js_register_cocos2d_TileMapAtlas(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_TileMapAtlas_initWithTileFile);
SE_DECLARE_FUNC(js_cocos2dx_TileMapAtlas_releaseMap);
SE_DECLARE_FUNC(js_cocos2dx_TileMapAtlas_getTileAt);
SE_DECLARE_FUNC(js_cocos2dx_TileMapAtlas_setTile);
SE_DECLARE_FUNC(js_cocos2dx_TileMapAtlas_setTGAInfo);
SE_DECLARE_FUNC(js_cocos2dx_TileMapAtlas_create);
SE_DECLARE_FUNC(js_cocos2dx_TileMapAtlas_TileMapAtlas);

extern se::Object* __jsb_CocosDenshion_SimpleAudioEngine_proto;
extern se::Class* __jsb_CocosDenshion_SimpleAudioEngine_class;

bool js_register_CocosDenshion_SimpleAudioEngine(se::Object* obj);
bool register_all_cocos2dx(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_preloadBackgroundMusic);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_stopBackgroundMusic);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_stopAllEffects);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_getBackgroundMusicVolume);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_resumeBackgroundMusic);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_setBackgroundMusicVolume);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_preloadEffect);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_isBackgroundMusicPlaying);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_getEffectsVolume);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_willPlayBackgroundMusic);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_pauseEffect);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_playEffect);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_rewindBackgroundMusic);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_playBackgroundMusic);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_resumeAllEffects);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_setEffectsVolume);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_stopEffect);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_pauseBackgroundMusic);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_pauseAllEffects);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_unloadEffect);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_resumeEffect);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_end);
SE_DECLARE_FUNC(js_cocos2dx_SimpleAudioEngine_getInstance);

