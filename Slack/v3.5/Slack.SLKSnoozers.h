/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface Slack.SLKSnoozers : NSObject {

	 snoozers;
	 dependencies;

}

@property (retain,nonatomic) NSMutableDictionary * snoozers; 
-(id)initWithDependencies:(id)arg1 ;
-(void)fetchSnoozers:(id)arg1 ;
-(BOOL)isDateBetweenBeginAndEndDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(NSMutableDictionary *)snoozers;
-(void)updateInfoForUser:(id)arg1 userData:(id)arg2 ;
-(void)setSnoozers:(NSMutableDictionary *)arg1 ;
-(void)doneParsingResponse:(id)arg1 ;
-(id)init;
@end

