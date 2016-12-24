/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/MPObjectMapper.h>

@class NSNumberFormatter, NSString;

@interface MPStringToNumberMapper : NSObject <MPObjectMapper> {

	NSNumberFormatter* _numberFormatter;

}

@property (nonatomic,retain) NSNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNumberStyle:(unsigned long long)arg1 ;
-(id)mappedObjectFromSourceObject:(id)arg1 ;
-(Class)requiredSourceObjectClass;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)init;
@end
