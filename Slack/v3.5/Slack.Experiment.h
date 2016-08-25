/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface Slack.Experiment : NSObject <NSCoding> {

	 experimentId;
	 exposureId;
	 type;
	 name;
	 group;
	 trigger;
	 shouldLogExposures;

}

@property (copy,nonatomic) NSString * experimentId; 
@property (copy,nonatomic) NSString * exposureId; 
@property (copy,nonatomic) NSString * type; 
@property (copy,nonatomic) NSString * name; 
@property (copy,nonatomic) NSString * group; 
@property (copy,nonatomic) NSString * trigger; 
@property (assign,nonatomic) BOOL shouldLogExposures; 
-(NSString *)experimentId;
-(NSString *)exposureId;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setExposureId:(NSString *)arg1 ;
-(BOOL)shouldLogExposures;
-(void)setShouldLogExposures:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(void)setTrigger:(NSString *)arg1 ;
-(NSString *)trigger;
@end

