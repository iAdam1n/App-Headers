/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSMutableDictionary;

@interface WADNSResolver : NSObject {

	NSMutableDictionary* _addressCache;
	unsigned long long _networkStatusForCache;
	BOOL _useDefaultIPv4GoogleNameServer;

}
+(id)sharedResolver;
-(void)updateNetworkStatus:(unsigned long long)arg1 ;
-(void)addressesForHost:(id)arg1 ipv4Addresses:(id*)arg2 ipv6Addresses:(id*)arg3 resolvedWithCFHost:(BOOL*)arg4 ;
-(void)addressesWithPrimaryResolverForHost:(id)arg1 ipv4Addresses:(id*)arg2 ipv6Addresses:(id*)arg3 ;
-(id)cachedIPv4AddressesForHost:(id)arg1 ;
-(void)addressesWithSecondaryResolverForHost:(id)arg1 ipv4Addresses:(id*)arg2 ipv6Addresses:(id*)arg3 ;
-(void)cleanUpCFHost:(CFHostRef)arg1 mode:(CFStringRef)arg2 runloop:(CFRunLoopRef)arg3 ;
-(void)setCacheAddresses:(id)arg1 host:(id)arg2 ;
-(id)resolveAddressForHost:(id)arg1 usingNameServerAddress:(id)arg2 queryIPv6:(BOOL)arg3 ;
-(void)freeQueryBuffer:(void*)arg1 replyBuffer:(void*)arg2 dnsSocket:(CFSocketRef)arg3 dnsReply:(SCD_Struct_WA84*)arg4 ;
-(CFSocketRef)newDNSSocketWithNameServerAddress:(id)arg1 ;
-(id)init;
@end
