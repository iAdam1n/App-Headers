/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface VungleTPATURL : NSObject <NSCoding, NSCopying> {

	NSString* _URLString;
	NSURL* _internalURL;

}

@property (nonatomic,retain) NSURL * internalURL;                      //@synthesize internalURL=_internalURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * URLString;              //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
-(id)performReplacementsWithURLString:(id)arg1 ;
-(BOOL)isEqualToTPATURL:(id)arg1 ;
-(NSURL *)internalURL;
-(void)setInternalURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)URLString;
-(id)initWithURLString:(id)arg1 ;
@end
