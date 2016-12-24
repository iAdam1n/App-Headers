/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPageComponentFlowNavigationDelegate, FBPageComponentFlowActionHandlerDelegate;
@class FBPageComponentFlowDataFetcher, FBPageComponentFlowFunnelLogger, NSString, FBPageComponentFlowFormFieldsManager;

@interface FBPageComponentFlowActionHandler : NSObject {

	FBPageComponentFlowDataFetcher* _dataFetcher;
	FBPageComponentFlowFunnelLogger* _funnelLogger;
	NSString* _entryEntId;
	NSString* _analyticsUUID;
	id<FBPageComponentFlowNavigationDelegate> _navigationDelegate;
	NSString* _screenId;
	NSString* _componentFlowId;
	NSString* _screenType;
	FBPageComponentFlowFormFieldsManager* _formFieldManager;
	id<FBPageComponentFlowActionHandlerDelegate> _delegate;

}

@property (nonatomic,copy) NSString * screenId;                                                         //@synthesize screenId=_screenId - In the implementation block
@property (nonatomic,copy) NSString * componentFlowId;                                                  //@synthesize componentFlowId=_componentFlowId - In the implementation block
@property (nonatomic,copy) NSString * screenType;                                                       //@synthesize screenType=_screenType - In the implementation block
@property (nonatomic,retain) FBPageComponentFlowFormFieldsManager * formFieldManager;                   //@synthesize formFieldManager=_formFieldManager - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageComponentFlowActionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setComponentFlowId:(NSString *)arg1 ;
-(void)setScreenId:(NSString *)arg1 ;
-(NSString *)componentFlowId;
-(NSString *)screenId;
-(id)_funnelActionTypeForActionSource:(unsigned long long)arg1 ;
-(id)initWithEntryEntId:(id)arg1 dataFetcher:(id)arg2 navigationDelegate:(id)arg3 funnelLogger:(id)arg4 analyticsUUID:(id)arg5 ;
-(void)submitFormWithScreenElementId:(id)arg1 actionSource:(unsigned long long)arg2 ;
-(void)fetchPartialUpdateDataWithScreenElementId:(id)arg1 targetScreenElementIds:(id)arg2 screenEvent:(id)arg3 eventData:(id)arg4 ;
-(void)navigateWithScreenElementId:(id)arg1 destinationScreenId:(id)arg2 ;
-(void)dismissForm;
-(void)openURL:(id)arg1 screenElementId:(id)arg2 ;
-(void)setScreenType:(NSString *)arg1 ;
-(FBPageComponentFlowFormFieldsManager *)formFieldManager;
-(void)setFormFieldManager:(FBPageComponentFlowFormFieldsManager *)arg1 ;
-(void)setDelegate:(id<FBPageComponentFlowActionHandlerDelegate>)arg1 ;
-(id<FBPageComponentFlowActionHandlerDelegate>)delegate;
-(NSString *)screenType;
@end
