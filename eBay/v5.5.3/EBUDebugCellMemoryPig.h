/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUDebugCellBase.h>

@class UILabel, UISwitch, UITextField;

@interface EBUDebugCellMemoryPig : EBUDebugCellBase {

	UILabel* _titleLabel;
	UISwitch* _pigSwitch;
	UILabel* _memoryToEatLabel;
	UITextField* _memoryToEat;
	UILabel* _secondsBetweenEatingLabel;
	UITextField* _secondsBetweenEating;

}
-(void)pigSwitchHit;
-(id)init;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(double)cellHeight;
@end
