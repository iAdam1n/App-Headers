/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@interface ScoreTierMultiplier : NSObject {

	int tierMultiplier;
	NSRange tierRange;

}

@property (assign,nonatomic) int tierMultiplier; 
@property (assign,nonatomic) NSRange tierRange; 
+(id)scoreTierMulipliersArrayWithString:(id)arg1 ;
-(NSRange)tierRange;
-(int)tierMultiplier;
-(id)initWithTierRange:(NSRange)arg1 tierMultiplier:(int)arg2 ;
-(void)setTierRange:(NSRange)arg1 ;
-(void)setTierMultiplier:(int)arg1 ;
@end

