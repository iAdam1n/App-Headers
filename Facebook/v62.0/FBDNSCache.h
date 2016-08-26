/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class NSObject, NSMutableDictionary;

@interface FBDNSCache : NSObject {

	NSObject*<OS_dispatch_queue> _saveQueue;
	mutex _lock;
	map<std::__1::basic_string<char>, std::__1::pair<__CFHost *, double>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::pair<__CFHost *, double> > > >* _lookupsInProgress;
	NSMutableDictionary* _cacheEntries;

}
+(id)sharedCache;
+(id)persistenceURL;
-(id)cachedHostForNamedHost:(id)arg1 ;
-(void)startLookupIfNotInProgress:(id)arg1 ;
-(void)saveEntries:(id)arg1 ;
-(void)insertDNSCacheHost:(id)arg1 forNamedHost:(id)arg2 pinned:(BOOL)arg3 ;
-(void)removeCacheEntry:(id)arg1 ;
-(id)hostsForAddress:(id)arg1 ;
-(void)receivedCallbackForHostRef:(CFHostRef)arg1 typeInfo:(int)arg2 error:(const SCD_Struct_FB994*)arg3 ;
-(void)deleteEntries;
-(void)invalidateCachedHost:(id)arg1 ;
-(id)init;
@end
