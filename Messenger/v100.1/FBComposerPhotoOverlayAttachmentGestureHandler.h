/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerPhotoOverlayAttachmentGestureHandler <NSObject>
@property (assign,nonatomic,__weak) id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate> delegate; 
@required
-(void)handlePinchGesture:(id)arg1;
-(id)initWithPhotoOverlayView:(id)arg1 gestureHandlerDelegate:(id)arg2;
-(void)handleRotationGesture:(id)arg1;
-(void)handleDoubleTapGesture:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate>)delegate;
-(void)handlePanGesture:(id)arg1;

@end
