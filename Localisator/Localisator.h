//
//  Localisator.h
//  CustomLocalisator
//
//  Created by Michael Azevedo on 05/03/2014.
//

#import <Foundation/Foundation.h>

#define LOCALIZATION(key) [[Localisator instance] localizedStringForKey:(key)]

extern NSString * LanguageChangedNotification;//通知
static const NSString * DeviceLanguage = @"DeviceLanguage";//系统语言标识


@interface Localisator : NSObject
{
     NSArray<NSString *>* _availableLanguages;
    BOOL _saveInUserDefaults;
    NSString * _currentLanguage;
}
@property(nonatomic,retain) NSArray<NSString *>* _availableLanguages;
@property (nonatomic, readwrite) BOOL _saveInUserDefaults;
@property(nonatomic,retain) NSString * _currentLanguage;

+ (Localisator*)instance;
-(NSString *)localizedStringForKey:(NSString*)key;
-(BOOL)setLanguage:(NSString*)newLanguage;


@end
