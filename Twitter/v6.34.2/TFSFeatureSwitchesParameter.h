/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, TFSFeatureSwitchesValue, NSArray;

@interface TFSFeatureSwitchesParameter : NSObject {

	NSString* _name;
	TFSFeatureSwitchesValue* _defaultValue;
	NSArray* _enumerationValues;

}

@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) TFSFeatureSwitchesValue * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) NSArray * enumerationValues;                         //@synthesize enumerationValues=_enumerationValues - In the implementation block
+(id)parameterWithDictionary:(id)arg1 ;
-(id)initWithName:(id)arg1 defaultValue:(id)arg2 enumerationValues:(id)arg3 ;
-(NSArray *)enumerationValues;
-(NSString *)name;
-(TFSFeatureSwitchesValue *)defaultValue;
@end

