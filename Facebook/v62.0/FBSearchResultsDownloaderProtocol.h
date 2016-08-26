/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchResultsDownloaderProtocol <NSObject>
@property (assign,nonatomic,__weak) id<FBSearchResultsDownloaderDelegate> delegate; 
@property (nonatomic,readonly) BOOL loading; 
@required
-(void)loadTail;
-(void)loadHead;
-(void)setDelegate:(id)arg1;
-(id<FBSearchResultsDownloaderDelegate>)delegate;
-(id)edges;
-(void)retry;
-(BOOL)loading;
-(BOOL)hasMoreData;

@end
