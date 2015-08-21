/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:20 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/BFAppLinkResolving.h>

@class NSMutableDictionary, NSString;

@interface FBAppLinkResolver : NSObject <BFAppLinkResolving> {

	NSMutableDictionary* _cachedLinks;
	long long _userInterfaceIdiom;

}

@property (nonatomic,retain) NSMutableDictionary * cachedLinks;              //@synthesize cachedLinks=_cachedLinks - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;                   //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resolver;
-(id)appLinkFromURLInBackground:(id)arg1 ;
-(void)setCachedLinks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedLinks;
-(id)appLinksFromURLsInBackground:(id)arg1 ;
-(id)initWithUserInterfaceIdiom:(long long)arg1 ;
-(void)dealloc;
-(long long)userInterfaceIdiom;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
@end

