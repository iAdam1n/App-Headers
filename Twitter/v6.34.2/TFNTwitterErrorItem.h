/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSError, NSString;

@interface TFNTwitterErrorItem : NSObject {

	NSError* _error;
	NSString* _mainErrorText;
	NSString* _errorSubtext;

}

@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * mainErrorText;              //@synthesize mainErrorText=_mainErrorText - In the implementation block
@property (nonatomic,copy) NSString * errorSubtext;               //@synthesize errorSubtext=_errorSubtext - In the implementation block
-(id)initWithError:(id)arg1 mainErrorText:(id)arg2 errorSubtext:(id)arg3 ;
-(NSString *)mainErrorText;
-(NSString *)errorSubtext;
-(void)setMainErrorText:(NSString *)arg1 ;
-(void)setErrorSubtext:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
