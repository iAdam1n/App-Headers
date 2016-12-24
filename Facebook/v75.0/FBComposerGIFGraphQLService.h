/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBComposerGIFGraphQLServiceDelegate;
@class FBUserSession;

@interface FBComposerGIFGraphQLService : NSObject {

	id<FBServiceTransactionMutating> _graphQLServiceMutator;
	BOOL _cachedResponse;
	FBUserSession* _session;
	id<FBComposerGIFGraphQLServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerGIFGraphQLServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleCachedResponse:(id)arg1 ;
-(void)_handleDownloadResponse:(id)arg1 ;
-(void)_handleFailureResponseWithError:(id)arg1 ;
-(void)loadGIFsWithSearchString:(id)arg1 resultNextCursor:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<FBComposerGIFGraphQLServiceDelegate>)arg1 ;
-(id<FBComposerGIFGraphQLServiceDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
-(void)_handleResult:(id)arg1 ;
@end
