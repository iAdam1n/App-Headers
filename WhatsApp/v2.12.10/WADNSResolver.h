/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <WhatsApp/WhatsApp-Structs.h>
@class NSMutableDictionary, NSObject;

@interface WADNSResolver : NSObject {

	NSMutableDictionary* _addressCache;
	unsigned long long _networkStatusForCache;
	NSObject*<OS_dispatch_queue> _primaryResolverQueue;

}
+(id)sharedResolver;
-(void)updateNetworkStatus:(unsigned long long)arg1 ;
-(id)addressesForHost:(id)arg1 ;
-(id)cachedAddressesForHost:(id)arg1 ;
-(id)addressesWithPrimaryResolverForHost:(id)arg1 ;
-(id)addressesWithSecondaryResolverForHost:(id)arg1 ;
-(void)cleanUpCFHost:(CFHostRef)arg1 mode:(CFStringRef)arg2 runloop:(CFRunLoopRef)arg3 ;
-(void)setCacheAddresses:(id)arg1 host:(id)arg2 ;
-(id)resolveAddressForHost:(id)arg1 serverAddress:(id)arg2 usingIPV6:(BOOL)arg3 ;
-(void)freeQueryBuffer:(void*)arg1 replyBuffer:(void*)arg2 dnsSocket:(CFSocketRef)arg3 dnsReply:(SCD_Struct_WA69*)arg4 ;
-(CFSocketRef)createDNSSocketWithNameServerAddress:(const char*)arg1 overIPv6:(BOOL)arg2 ;
-(void)freeDNSSocket:(CFSocketRef)arg1 ;
-(id)init;
@end
