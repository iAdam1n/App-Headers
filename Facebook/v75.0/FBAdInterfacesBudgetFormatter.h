/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumberFormatter;

@interface FBAdInterfacesBudgetFormatter : NSObject {

	NSNumberFormatter* _budgetFormatter;

}
-(id)currencySymbolForCurrency:(id)arg1 ;
-(id)formatBudget:(id)arg1 ;
-(id)formatAmount:(unsigned long long)arg1 withOffset:(unsigned long long)arg2 currency:(id)arg3 ;
-(id)formatAmount:(unsigned long long)arg1 withOffset:(unsigned long long)arg2 currency:(id)arg3 useGroupingSeparator:(BOOL)arg4 ;
-(id)formatBudget:(id)arg1 useGroupingSeparator:(BOOL)arg2 ;
-(id)init;
@end
