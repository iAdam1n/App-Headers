/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface Token : NSObject {

	unsigned short _command;
	NSMutableArray* _values;

}

@property (assign,nonatomic) unsigned short command;              //@synthesize command=_command - In the implementation block
-(double)parameter:(long long)arg1 ;
-(long long)valence;
-(void)addValue:(double)arg1 ;
-(unsigned short)command;
-(void)setCommand:(unsigned short)arg1 ;
-(id)initWithCommand:(unsigned short)arg1 ;
@end
