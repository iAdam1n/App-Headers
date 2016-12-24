/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNPhotoViewModel;

@interface MNMediaViewerState : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNPhotoViewModel* _viewing_photoViewModel;

}
+(id)paging;
+(id)viewingWithPhotoViewModel:(id)arg1 ;
+(id)editing;
+(id)loading;
+(id)zooming;
-(void)matchViewing:(/*^block*/id)arg1 editing:(/*^block*/id)arg2 zooming:(/*^block*/id)arg3 loading:(/*^block*/id)arg4 paging:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
