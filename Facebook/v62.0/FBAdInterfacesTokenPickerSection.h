/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface FBAdInterfacesTokenPickerSection : NSObject <NSCopying> {

	NSString* _header;
	NSString* _group;
	NSMutableArray* _content;

}

@property (nonatomic,copy) NSString * header;                     //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * group;                      //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSMutableArray * content;              //@synthesize content=_content - In the implementation block
-(id)initWithHeader:(id)arg1 group:(id)arg2 content:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)content;
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(void)addSection:(id)arg1 ;
-(void)setContent:(NSMutableArray *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
@end

