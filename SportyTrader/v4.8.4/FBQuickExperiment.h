/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBQuickExperiment : NSObject {

	NSString* _name;
	NSString* _group;
	NSDictionary* _parameters;

}

@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * group;                       //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)quickExperimentsFromDictionaries:(id)arg1 ;
+(id)getParameter:(id)arg1 fromExperiment:(id)arg2 withDefault:(id)arg3 ;
+(id)findQuickExperimentWithName:(id)arg1 inArray:(id)arg2 ;
-(id)getParameter:(id)arg1 withDefault:(id)arg2 ;
-(id)getStringParameter:(id)arg1 withDefault:(id)arg2 ;
-(id)getNumberParameter:(id)arg1 withDefault:(id)arg2 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
@end
