/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ECAPIValue : NSObject {

	NSString* _canonicalValue;
	NSString* _localizedValue;

}

@property (nonatomic,retain) NSString * canonicalValue;              //@synthesize canonicalValue=_canonicalValue - In the implementation block
@property (nonatomic,retain) NSString * localizedValue;              //@synthesize localizedValue=_localizedValue - In the implementation block
-(NSString *)canonicalValue;
-(NSString *)localizedValue;
-(void)setCanonicalValue:(NSString *)arg1 ;
-(void)setLocalizedValue:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

