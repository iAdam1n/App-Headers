/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNActiveNowViewDelegate.h>
#import <Messenger/MNInboxUnitViewProviding.h>
#import <Messenger/MNInboxUnitViewConfiguring.h>
#import <Messenger/MNInboxUnitViewTappable.h>

@protocol MNInboxUnitViewTapDelegate;
@class MNActiveNowController, MNActiveNowView, NSString;

@interface MNActiveNowViewProvider : NSObject <MNActiveNowViewDelegate, MNInboxUnitViewProviding, MNInboxUnitViewConfiguring, MNInboxUnitViewTappable> {

	MNActiveNowController* _activeNowController;
	MNActiveNowView* _activeNowView;
	id<MNInboxUnitViewTapDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNInboxUnitViewTapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithActiveNowController:(id)arg1 ;
-(Class)viewClassForViewModel:(id)arg1 ;
-(id)viewForViewModel:(id)arg1 ;
-(void)_initActiveNowViewIfNecessary;
-(void)activeNowViewDidTap:(id)arg1 ;
-(id)viewModelForView:(id)arg1 ;
-(void)configureView:(id)arg1 withViewModel:(id)arg2 ;
-(CGSize)sizeForViewModel:(id)arg1 collectionViewSize:(CGSize)arg2 ;
-(void)setDelegate:(id<MNInboxUnitViewTapDelegate>)arg1 ;
-(id<MNInboxUnitViewTapDelegate>)delegate;
@end
