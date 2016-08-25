/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WAInetAddress;

@interface WADNSCacheEntry : NSObject <NSSecureCoding> {

	WAInetAddress* _inetAddress;
	double _expirationTime;

}

@property (nonatomic,readonly) WAInetAddress * inetAddress;              //@synthesize inetAddress=_inetAddress - In the implementation block
@property (nonatomic,readonly) double expirationTime;                    //@synthesize expirationTime=_expirationTime - In the implementation block
@property (nonatomic,readonly) BOOL expired; 
+(BOOL)supportsSecureCoding;
-(id)initWithInetAddress:(id)arg1 expirationTime:(double)arg2 ;
-(WAInetAddress *)inetAddress;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)expirationTime;
-(BOOL)expired;
@end

