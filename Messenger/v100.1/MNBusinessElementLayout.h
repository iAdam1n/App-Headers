/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNBusinessElementLayout : FBValueObject <NSCopying> {

	BOOL _dynamicLayout;
	long long _alignment;
	CGSize _size;
	UIEdgeInsets _margins;

}

@property (nonatomic,readonly) long long alignment;               //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets margins;              //@synthesize margins=_margins - In the implementation block
@property (nonatomic,readonly) CGSize size;                       //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL dynamicLayout;                //@synthesize dynamicLayout=_dynamicLayout - In the implementation block
-(id)initWithAlignment:(long long)arg1 margins:(UIEdgeInsets)arg2 size:(CGSize)arg3 dynamicLayout:(BOOL)arg4 ;
-(BOOL)dynamicLayout;
-(CGSize)size;
-(long long)alignment;
-(UIEdgeInsets)margins;
@end
