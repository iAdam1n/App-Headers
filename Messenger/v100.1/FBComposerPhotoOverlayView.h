/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBComposerPhotoOverlayViewProtocol.h>

@class NSString;

@interface FBComposerPhotoOverlayView : UIView <FBComposerPhotoOverlayViewProtocol> {

	BOOL _selected;

}

@property (assign,nonatomic) BOOL selected;                         //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)photoOverlayAttachmentGestureHandlerClass;
-(id)contentView;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
@end
