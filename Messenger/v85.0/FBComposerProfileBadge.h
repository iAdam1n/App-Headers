/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL;

@interface FBComposerProfileBadge : FBValueObject <NSCopying, NSCoding> {

	BOOL _shouldShowOptOut;
	NSURL* _badgeURL;

}

@property (nonatomic,copy,readonly) NSURL * badgeURL;              //@synthesize badgeURL=_badgeURL - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowOptOut;              //@synthesize shouldShowOptOut=_shouldShowOptOut - In the implementation block
-(id)initWithBadgeURL:(id)arg1 shouldShowOptOut:(BOOL)arg2 ;
-(NSURL *)badgeURL;
-(BOOL)shouldShowOptOut;
@end
