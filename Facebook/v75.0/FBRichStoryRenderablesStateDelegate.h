/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryRenderablesStateDelegate <NSObject>
@required
-(void)renderablesState:(id)arg1 didGenerateRenderable:(id)arg2 forStoryBlock:(id)arg3;
-(void)renderablesState:(id)arg1 renderableDidEnterWorkingRangeForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 renderableDidExitWorkingRangeForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 renderableDidEnterVisibleViewportForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 renderableDidExitVisibleViewportForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 renderableDidEnterInteractiveViewportForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 renderableDidExitInteractiveViewportForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 didCullRenderable:(id)arg2 forStoryBlock:(id)arg3;

@end
