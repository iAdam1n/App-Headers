/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class MTDatacenterAddress;

@interface MTTransportScheme : NSObject <NSCoding> {

	BOOL _media;
	Class _transportClass;
	MTDatacenterAddress* _address;

}

@property (nonatomic,readonly) Class transportClass;                       //@synthesize transportClass=_transportClass - In the implementation block
@property (nonatomic,readonly) MTDatacenterAddress * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL media;                                 //@synthesize media=_media - In the implementation block
-(id)initWithTransportClass:(Class)arg1 address:(id)arg2 media:(BOOL)arg3 ;
-(long long)compareToScheme:(id)arg1 ;
-(BOOL)isOptimal;
-(BOOL)isEqualToScheme:(id)arg1 ;
-(id)createTransportWithContext:(id)arg1 datacenterId:(long long)arg2 delegate:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(MTDatacenterAddress *)address;
-(BOOL)media;
-(Class)transportClass;
@end
