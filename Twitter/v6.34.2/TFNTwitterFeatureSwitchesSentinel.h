/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFSFeatureSwitchesSentinel.h>

@class TFNTwitterSentinel;

@interface TFNTwitterFeatureSwitchesSentinel : NSObject <TFSFeatureSwitchesSentinel> {

	TFNTwitterSentinel* _sentinel;

}
-(void)removeFile;
-(BOOL)fileExists;
-(id)init;
-(id)initWithAccountID:(id)arg1 ;
-(BOOL)createFile;
@end

