/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
@end

