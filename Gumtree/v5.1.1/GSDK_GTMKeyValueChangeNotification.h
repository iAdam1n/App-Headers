/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface GSDK_GTMKeyValueChangeNotification : NSObject <NSCopying> {

	NSString* keyPath_;
	id object_;
	id userInfo_;
	NSDictionary* change_;

}
-(id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 userInfo:(id)arg3 change:(id)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(id)userInfo;
-(id)keyPath;
-(id)change;
@end

