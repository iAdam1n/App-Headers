/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTypeaheadObject.h>

@class NSString;

@interface TFNTwitterTypeaheadHashtag : TFNTwitterTypeaheadObject {

	NSString* _hashtag;

}

@property (nonatomic,copy) NSString * hashtag;              //@synthesize hashtag=_hashtag - In the implementation block
-(NSString *)hashtag;
-(void)setHashtag:(NSString *)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithBufferCursor:(const void*)arg1 bufferEnd:(const void*)arg2 ;
-(void)encodeToMutableData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

