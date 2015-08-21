/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNHARRequestResponseBase.h>

@class TFNHARResponseContent, NSString;

@interface TFNHARResponse : TFNHARRequestResponseBase {

	TFNHARResponseContent* _content;
	NSString* _redirectURL;
	long long _status;
	NSString* _statusText;

}

@property (nonatomic,retain) TFNHARResponseContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSString * redirectURL;                       //@synthesize redirectURL=_redirectURL - In the implementation block
@property (assign,nonatomic) long long status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * statusText;                        //@synthesize statusText=_statusText - In the implementation block
-(id)JSONDictionary;
-(void)setStatusText:(NSString *)arg1 ;
-(TFNHARResponseContent *)content;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setContent:(TFNHARResponseContent *)arg1 ;
-(NSString *)redirectURL;
-(void)setRedirectURL:(NSString *)arg1 ;
-(NSString *)statusText;
@end

