/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@interface ScoreTier : ModelObject {

	int _length;
	int _location;
	int _value;

}

@property (assign,nonatomic) int length;                //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) int location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int value;                 //@synthesize value=_value - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(int)length;
-(int)value;
-(void)setValue:(int)arg1 ;
-(void)setLength:(int)arg1 ;
-(int)location;
-(void)setLocation:(int)arg1 ;
@end

