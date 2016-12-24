/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBInspirationMediaOverlayHeaderComponentViewDelegate;
@class CKComponentHostingView, FBFeedToolbox;

@interface FBInspirationMediaOverlayHeaderComponentView : UIView {

	CKComponentHostingView* _hostingView;
	FBFeedToolbox* _toolbox;
	id<FBInspirationMediaOverlayHeaderComponentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInspirationMediaOverlayHeaderComponentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)initWithToolbox:(id)arg1 ;
-(void)updateWithMedia:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBInspirationMediaOverlayHeaderComponentViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBInspirationMediaOverlayHeaderComponentViewDelegate>)delegate;
-(void)_doneAction:(id)arg1 ;
-(void)_moreAction:(id)arg1 ;
@end
