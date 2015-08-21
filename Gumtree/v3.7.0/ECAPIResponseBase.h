/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/EMFXMLResponse.h>

@class NSString;

@interface ECAPIResponseBase : EMFXMLResponse {

	NSString* _errorXPath;

}

@property (nonatomic,retain) NSString * errorXPath;              //@synthesize errorXPath=_errorXPath - In the implementation block
-(id)eTag;
-(BOOL)eTagMatched;
-(void)postProcessResponse;
-(void)setErrorXPath:(NSString *)arg1 ;
-(NSString *)errorXPath;
-(id)attributeEnumDataWithNode:(id)arg1 ;
-(id)attributeEnumOptionDataWithNode:(id)arg1 ;
-(id)popupMessageWithNode:(id)arg1 ;
-(id)buttonsWithNode:(id)arg1 ;
-(id)locationWithNode:(id)arg1 ;
-(id)categoryWithNode:(id)arg1 ;
-(id)attributeWithNode:(id)arg1 ;
-(id)pictureWithNode:(id)arg1 ;
-(id)featureWithNode:(id)arg1 ;
-(id)alertDestinationWithNode:(id)arg1 ;
-(id)propertyWithNode:(id)arg1 ;
-(id)attributeDependentEnumDataWithNode:(id)arg1 ;
-(id)adWithNode:(id)arg1 ;
-(id)alertWithNode:(id)arg1 ;
-(id)extendedInfoWithNode:(id)arg1 ;
-(id)description;
-(id)configuration;
-(void)parseData:(id)arg1 ;
-(id)linkWithNode:(id)arg1 ;
@end

