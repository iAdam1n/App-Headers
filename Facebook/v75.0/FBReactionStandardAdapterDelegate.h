/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionCardAdapterDelegate.h>
#import <Facebook/FBReactionCardAdapterDelegateOptionalAdditions.h>

@protocol FBReactionDataFetcherProtocol, FBReactionCardAdapterDelegateOptionalAdditionsNSObject;
@class FBReactionContext, FBReactionExperienceLogger, UIViewController, UITableView, FBReactionUnitDataSource, NSString;

@interface FBReactionStandardAdapterDelegate : NSObject <FBReactionCardAdapterDelegate, FBReactionCardAdapterDelegateOptionalAdditions> {

	FBReactionContext* _reactionContext;
	FBReactionExperienceLogger* _logger;
	UIViewController* _viewController;
	UITableView* _tableView;
	id<FBReactionDataFetcherProtocol> _dataFetcher;
	FBReactionUnitDataSource* _unitDataSource;
	BOOL _useUnitDataSource;
	id<FBReactionCardAdapterDelegateOptionalAdditions><NSObject> _optionalDelegate;

}

@property (assign,nonatomic,__weak) id<FBReactionCardAdapterDelegateOptionalAdditions><NSObject> optionalDelegate;              //@synthesize optionalDelegate=_optionalDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)replaceUnit:(id)arg1 withUnit:(id)arg2 ;
-(void)userDidGiveFeedback:(id)arg1 withExtras:(id)arg2 forReactionUnit:(id)arg3 ;
-(void)hideCardForReactionUnit:(id)arg1 ;
-(void)cardHeightDidChangeForUnit:(id)arg1 shouldPreservePosition:(BOOL)arg2 ;
-(id)_adapterForUnit:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 viewController:(id)arg2 tableView:(id)arg3 dataFetcher:(id)arg4 logger:(id)arg5 ;
-(void)setOptionalDelegate:(id<FBReactionCardAdapterDelegateOptionalAdditions><NSObject>)arg1 ;
-(id<FBReactionCardAdapterDelegateOptionalAdditions><NSObject>)optionalDelegate;
-(id)initWithReactionContext:(id)arg1 viewController:(id)arg2 tableView:(id)arg3 dataFetcher:(id)arg4 ;
-(id)initWithReactionContext:(id)arg1 viewController:(id)arg2 tableView:(id)arg3 unitDataSource:(id)arg4 logger:(id)arg5 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end
