/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
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

