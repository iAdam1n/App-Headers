/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryRendererControllerDelegate <NSObject>
@optional
-(void)rendererController:(id)arg1 didUpdateContentSize:(CGSize)arg2;
-(void)rendererController:(id)arg1 didFinishLayoutWithSize:(CGSize)arg2;
-(void)rendererController:(id)arg1 didGenerateBlockController:(id)arg2 forStoryBlock:(id)arg3;
-(void)rendererController:(id)arg1 didCullBlockController:(id)arg2 forStoryBlock:(id)arg3;
-(void)rendererController:(id)arg1 storyBlockEnteredVisibleViewport:(id)arg2;
-(void)rendererController:(id)arg1 storyBlockExitedVisibleViewport:(id)arg2;
-(void)rendererController:(id)arg1 storyBlockEnteredInteractiveViewport:(id)arg2;
-(void)rendererController:(id)arg1 storyBlockExitedInteractiveViewport:(id)arg2;

@required
-(void)rendererController:(id)arg1 addRenderableToRoot:(id)arg2 forStoryBlock:(id)arg3;
-(void)rendererController:(id)arg1 removeRenderableFromRoot:(id)arg2 forStoryBlock:(id)arg3;

@end
