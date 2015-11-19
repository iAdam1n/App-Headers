/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
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
-(id)init;
@end

