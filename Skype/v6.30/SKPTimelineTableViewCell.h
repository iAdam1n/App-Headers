/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPListItemTableViewCell.h>
#import <Skype/SKPHumanReadableTimestampDelegate.h>

@class NSString, SKPHumanReadableTimestamp, NSDate;

@interface SKPTimelineTableViewCell : SKPListItemTableViewCell <SKPHumanReadableTimestampDelegate> {

	BOOL _muted;
	NSString* _name;
	SKPHumanReadableTimestamp* _humanReadableTimestamp;

}

@property (nonatomic,retain) SKPHumanReadableTimestamp * humanReadableTimestamp;              //@synthesize humanReadableTimestamp=_humanReadableTimestamp - In the implementation block
@property (nonatomic,retain) NSDate * timestampDate; 
@property (assign,nonatomic) BOOL muted;                                                      //@synthesize muted=_muted - In the implementation block
@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)humanReadableTimestampDidUpdate:(id)arg1 ;
-(SKPHumanReadableTimestamp *)humanReadableTimestamp;
-(void)setHumanReadableTimestamp:(SKPHumanReadableTimestamp *)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setTimestampDate:(NSDate *)arg1 ;
-(NSDate *)timestampDate;
@end
