/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBVideoEdits;

@interface FBMediaTranscodeParams : FBValueObject <NSCopying, NSCoding> {

	BOOL _useServerSideSettings;
	unsigned long long _quality;
	FBVideoEdits* _edits;

}

@property (nonatomic,readonly) unsigned long long quality;              //@synthesize quality=_quality - In the implementation block
@property (nonatomic,copy,readonly) FBVideoEdits * edits;               //@synthesize edits=_edits - In the implementation block
@property (nonatomic,readonly) BOOL useServerSideSettings;              //@synthesize useServerSideSettings=_useServerSideSettings - In the implementation block
-(FBVideoEdits *)edits;
-(BOOL)useServerSideSettings;
-(id)initWithQuality:(unsigned long long)arg1 edits:(id)arg2 useServerSideSettings:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)quality;
@end
