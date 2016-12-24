/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsPeerToPeerPaymentRequestCoordinatorListener.h>
#import <Messenger/MNPaymentsHistoryDataRetriever.h>

@protocol MNPaymentsHistoryDataRetrieverDelegate;
@class FBGraphQLService, FBMemPageInfo, NSArray, MNPaymentsPeerToPeerPaymentRequestCoordinator, NSString;

@interface MNPaymentsPeerToPeerRequestHistoryDataRetriever : NSObject <MNPaymentsPeerToPeerPaymentRequestCoordinatorListener, MNPaymentsHistoryDataRetriever> {

	long long _directionType;
	FBGraphQLService* _graphQLSerivce;
	FBMemPageInfo* _currentPageInfo;
	NSArray* _currentEdges;
	id _lookupHandle;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _requestCoordinator;
	id<MNPaymentsHistoryDataRetrieverDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * analyticsTabName; 
@property (nonatomic,copy,readonly) NSString * contentForEmptyData; 
@property (nonatomic,readonly) BOOL hasMoreData; 
@property (getter=isLoadingData,nonatomic,readonly) BOOL loadingData; 
@property (nonatomic,copy,readonly) NSArray * loadedEdges; 
@property (assign,nonatomic,__weak) id<MNPaymentsHistoryDataRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)_handleMergedEdges:(id)arg1 withInsertionIndexes:(id)arg2 andPageInfo:(id)arg3 ;
-(void)didUpdatePaymentRequest:(id)arg1 ;
-(id)initWithRequestDirectionType:(long long)arg1 graphQLService:(id)arg2 requestCoordinator:(id)arg3 ;
-(NSString *)analyticsTabName;
-(NSArray *)loadedEdges;
-(BOOL)loadMoreDataWithLimit:(unsigned long long)arg1 ;
-(NSString *)contentForEmptyData;
-(void)_handleDownloadedResponse:(id)arg1 existingEdges:(id)arg2 error:(id)arg3 ;
-(void)_updateRequest:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)hasMoreData;
-(void)setDelegate:(id<MNPaymentsHistoryDataRetrieverDelegate>)arg1 ;
-(id<MNPaymentsHistoryDataRetrieverDelegate>)delegate;
-(NSString *)title;
-(void)reset;
-(void)_handleError:(id)arg1 ;
-(BOOL)isLoadingData;
@end
