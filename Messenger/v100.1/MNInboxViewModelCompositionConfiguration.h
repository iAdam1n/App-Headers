/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNInboxViewModelCompositionConfiguration : NSObject <NSCopying> {

	unsigned long long _subtype;
	BOOL _static_allowsMontageSection;
	BOOL _static_allowsCYMKSection;
	long long _static_secondaryThreadListType;
	BOOL _static_shouldCollapseSecondaryThreadList;
	BOOL _static_allowsMessageRequestSection;
	BOOL _dynamic_allowsMontageSection;
	BOOL _dynamic_allowsCYMKSection;
	long long _dynamic_secondaryThreadListType;
	BOOL _dynamic_shouldCollapseSecondaryThreadList;
	BOOL _dynamic_allowsMessageRequestSection;

}
+(id)dynamicWithAllowsMontageSection:(BOOL)arg1 allowsCYMKSection:(BOOL)arg2 secondaryThreadListType:(long long)arg3 shouldCollapseSecondaryThreadList:(BOOL)arg4 allowsMessageRequestSection:(BOOL)arg5 ;
+(id)staticWithAllowsMontageSection:(BOOL)arg1 allowsCYMKSection:(BOOL)arg2 secondaryThreadListType:(long long)arg3 shouldCollapseSecondaryThreadList:(BOOL)arg4 allowsMessageRequestSection:(BOOL)arg5 ;
-(void)matchStatic:(/*^block*/id)arg1 dynamic:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
