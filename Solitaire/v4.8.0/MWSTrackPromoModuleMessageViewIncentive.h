/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MWSTrackPromoModuleMessageView.h>

@class NSDate, NSDateFormatter, UILabel;

@interface MWSTrackPromoModuleMessageViewIncentive : MWSTrackPromoModuleMessageView {

	NSDate* _incentiveExpirationDate;
	NSDateFormatter* _dateFormatter;
	UILabel* _expirationLabel;

}
-(id)initWithData:(id)arg1 forPromoModule:(id)arg2 ;
-(void)updateExpirationLabelExpirationDate:(id)arg1 ;
-(void)updateExpirationLabel;
-(void)updateLayout;
@end

