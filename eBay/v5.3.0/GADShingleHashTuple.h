/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface GADShingleHashTuple : NSObject {

	NSArray* _shingle;
	unsigned long long _hashValue;

}

@property (nonatomic,copy,readonly) NSArray * shingle;                    //@synthesize shingle=_shingle - In the implementation block
@property (nonatomic,readonly) unsigned long long hashValue;              //@synthesize hashValue=_hashValue - In the implementation block
-(id)initWithShingle:(id)arg1 hashValue:(unsigned long long)arg2 ;
-(NSArray *)shingle;
-(unsigned long long)hashValue;
-(id)init;
@end

