/* @@@LICENSE
*
*      Copyright (c) 2010-2012 Hewlett-Packard Development Company, L.P.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* LICENSE@@@ */




# ifndef IMEDATA_H
# define IMEDATA_H
# define COMMENT : THIS FILE IS AUTO GENERATED BY "Src/ime/IMEData.h_generator.h"! DO NOT EDIT!
# include <QRect>
# include <QSize>
# include <QTouchEvent>
# include <QPainter>
# include <QRegion>
# include <QString>
# include <palmimedefines.h>
class IMEData_QSize: public QObject
{
Q_OBJECT
public:
	IMEData_QSize()
	{
	}
	const QSize & get() const
	{
		return m_value;
	}
	void set(const QSize & value)
	{
		if (!(value == m_value))
		{
			m_value = value;
			Q_EMIT valueChanged(value);
		}
	}
Q_SIGNALS: void valueChanged(const QSize & newValue);
private:
	QSize m_value;
};
class IMEData_QRect: public QObject
{
Q_OBJECT
public:
	IMEData_QRect()
	{
	}
	const QRect & get() const
	{
		return m_value;
	}
	void set(const QRect & value)
	{
		if (!(value == m_value))
		{
			m_value = value;
			Q_EMIT valueChanged(value);
		}
	}
Q_SIGNALS: void valueChanged(const QRect & newValue);
private:
	QRect m_value;
};
class IMEData_QRegion: public QObject
{
Q_OBJECT
public:
	IMEData_QRegion()
	{
	}
	const QRegion & get() const
	{
		return m_value;
	}
	void set(const QRegion & value)
	{
		if (!(value == m_value))
		{
			m_value = value;
			Q_EMIT valueChanged(value);
		}
	}
Q_SIGNALS: void valueChanged(const QRegion & newValue);
private:
	QRegion m_value;
};
class IMEData_bool: public QObject
{
Q_OBJECT
public:
	IMEData_bool() :
		m_value(false)
	{
	}
	const bool & get() const
	{
		return m_value;
	}
	void set(const bool & value)
	{
		if (!(value == m_value))
		{
			m_value = value;
			Q_EMIT valueChanged(value);
		}
	}
Q_SIGNALS: void valueChanged(const bool & newValue);
private:
	bool m_value;
};
class IMEData_qint32: public QObject
{
Q_OBJECT
public:
	IMEData_qint32() :
		m_value(0)
	{
	}
	const qint32 & get() const
	{
		return m_value;
	}
	void set(const qint32 & value)
	{
		if (!(value == m_value))
		{
			m_value = value;
			Q_EMIT valueChanged(value);
		}
	}
Q_SIGNALS: void valueChanged(const qint32 & newValue);
private:
	qint32 m_value;
};
class IMEData_QString: public QObject
{
Q_OBJECT
public:
	IMEData_QString()
	{
	}
	const QString & get() const
	{
		return m_value;
	}
	void set(const QString & value)
	{
		if (!(value == m_value))
		{
			m_value = value;
			Q_EMIT valueChanged(value);
		}
	}
Q_SIGNALS: void valueChanged(const QString & newValue);
private:
	QString m_value;
};
class IMEData_EditorState: public QObject
{
Q_OBJECT
public:
	IMEData_EditorState()
	{
	}
	const PalmIME::EditorState & get() const
	{
		return m_value;
	}
	void set(const PalmIME::EditorState & value)
	{
		m_value = value;
		Q_EMIT valueChanged(value);
	}
Q_SIGNALS: void valueChanged(const PalmIME::EditorState & newValue);
private:
	PalmIME::EditorState m_value;
};
# endif