/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/CKComponentStateListener.h>

@protocol CKComponentSizeRangeProviding, CKComponentHostingViewDelegate;
@class CKComponent, NSSet, UIView, NSString;

@interface CKComponentHostingView : UIView <CKComponentStateListener> {

	Class _componentProvider;
	id<CKComponentSizeRangeProviding> _sizeRangeProvider;
	CKComponentHostingViewInputs* _pendingInputs;
	CKComponent* _component;
	BOOL _componentNeedsUpdate;
	unsigned long long _requestedUpdateMode;
	CKComponentLayout* _mountedLayout;
	NSSet* _mountedComponents;
	BOOL _scheduledAsynchronousComponentUpdate;
	BOOL _isSynchronouslyUpdatingComponent;
	BOOL _isMountingComponent;
	id<CKComponentHostingViewDelegate> _delegate;
	UIView* _containerView;

}

@property (nonatomic,readonly) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) id<CKComponentHostingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rangeListeningViewWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2 session:(id)arg3 ;
-(id)initWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2 ;
-(void)updateModel:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)updateContext:(id)arg1 mode:(unsigned long long)arg2 ;
-(const CKComponentLayout*)mountedLayout;
-(void)_setNeedsUpdateWithMode:(unsigned long long)arg1 ;
-(void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(/*^block*/id)arg3 mode:(unsigned long long)arg4 ;
-(void)_asynchronouslyUpdateComponentIfNeeded;
-(void)_synchronouslyUpdateComponentIfNeeded;
-(void)_scheduleAsynchronousUpdate;
-(void)_applyResult:(const CKBuildComponentResult*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<CKComponentHostingViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CKComponentHostingViewDelegate>)delegate;
-(UIView *)containerView;
@end
