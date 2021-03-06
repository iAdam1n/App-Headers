/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNStoreOpenerOptions.h>
#import <Twitter/NSCopying.h>

@class NSString;

@interface TFNStoreOpenerOptions : NSObject <TFNStoreOpenerOptions, NSCopying> {

	BOOL _shouldOpenAppStoreInStandaloneApp;
	double _timeoutToOpenAppStoreInStandaloneApp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldOpenAppStoreInStandaloneApp;                   //@synthesize shouldOpenAppStoreInStandaloneApp=_shouldOpenAppStoreInStandaloneApp - In the implementation block
@property (nonatomic,readonly) double timeoutToOpenAppStoreInStandaloneApp;              //@synthesize timeoutToOpenAppStoreInStandaloneApp=_timeoutToOpenAppStoreInStandaloneApp - In the implementation block
-(double)timeoutToOpenAppStoreInStandaloneApp;
-(BOOL)shouldOpenAppStoreInStandaloneApp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOptions:(id)arg1 ;
@end

