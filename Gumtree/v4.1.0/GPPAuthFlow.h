/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GPPCallbackQueue.h>

@class GTMOAuth2Authentication, NSError;

@interface GPPAuthFlow : GPPCallbackQueue {

	GTMOAuth2Authentication* _auth;
	NSError* _error;

}

@property (nonatomic,retain) GTMOAuth2Authentication * auth;              //@synthesize auth=_auth - In the implementation block
@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setAuth:(GTMOAuth2Authentication *)arg1 ;
-(GTMOAuth2Authentication *)auth;
@end
