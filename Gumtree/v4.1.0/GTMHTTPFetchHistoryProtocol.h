/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GTMHTTPFetchHistoryProtocol <NSObject>
@required
-(void)updateRequest:(id)arg1 isHTTPGet:(BOOL)arg2;
-(BOOL)shouldCacheETaggedData;
-(id)cachedDataForRequest:(id)arg1;
-(void)updateFetchHistoryWithRequest:(id)arg1 response:(id)arg2 downloadedData:(id)arg3;
-(void)removeCachedDataForRequest:(id)arg1;
-(id)cookieStorage;

@end
